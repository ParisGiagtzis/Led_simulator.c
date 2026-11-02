#include <stdio.h>

int main() {
    int rows, columns;
    int leds_on = 0;
    int leds_off = 0;

    // 1 & 2. Ζητάμε διαστάσεις και ελέγχουμε αν είναι έγκυρες (1 έως 8)
    do {
        printf("Rows (1-8): ");
        scanf("%d", &rows);
        
        printf("Columns (1-8): ");
        scanf("%d", &columns);
        
        // Αν κάποια διάσταση είναι εκτός ορίων, εμφανίζουμε το μήνυμα λάθους
        if (rows < 1 || rows > 8 || columns < 1 || columns > 8) {
            printf("Invalid dimensions\n");
        }
        
    } while (rows < 1 || rows > 8 || columns < 1 || columns > 8); // Επανάληψη αν υπάρχει λάθος

    // 3. Εμφάνιση της συστοιχίας LED
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= columns; j++) {
            
            // Αν η γραμμή είναι περιττή (1, 3, 5...), τα LED είναι αναμμένα (#)
            if (i % 2 != 0) {
                printf("#");
                leds_on++; // Αυξάνουμε τον μετρητή των αναμμένων
            } 
            // Διαφορετικά (άρτια γραμμή 2, 4, 6...), τα LED είναι σβηστά (.)
            else {
                printf(".");
                leds_off++; // Αυξάνουμε τον μετρητή των σβηστών
            }
        }
        printf("\n"); // Αλλαγή γραμμής μετά από κάθε σειρά
    }

    // 4. Εμφάνιση των συνολικών αποτελεσμάτων
    printf("LEDs ON: %d\n", leds_on);
    printf("LEDs OFF: %d\n", leds_off);

    return 0;
    
}

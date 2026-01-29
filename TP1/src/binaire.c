#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    
    for (int k = 0; k < 5; k++) {
        int n = nombres[k];
        printf("%d en binaire : ", n);
        
        if (n == 0) {
            printf("0");
        } else {
            // Astuce : On parcourt les 32 bits de l'entier du plus fort au plus faible
            int started = 0;
            for (int i = 31; i >= 0; i--) {
                int bit = (n >> i) & 1; // On décale et on masque
                if (bit == 1) started = 1; // On ignore les zéros au début
                if (started) printf("%d", bit);
            }
        }
        printf("\n");
    }
    return 0;
}

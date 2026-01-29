#include <stdio.h>

int main() {
    int n = 5;
    
    for (int i = 1; i <= n; i++) {
        // 1. Les espaces pour centrer
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        
        // 2. La montée (1 jusqu'à i)
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        
        // 3. La descente (i-1 jusqu'à 1)
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        
        printf("\n");
    }
    printf("Génération de la pyramide terminée.\n");
    return 0;
}

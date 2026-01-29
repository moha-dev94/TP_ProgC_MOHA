#include <stdio.h>

int main() {
    int somme = 0;

    for (int n = 1; n <= 1000; n++) {
        // Condition 2 : Divisible par 11 -> on passe au suivant
        if (n % 11 == 0) {
            continue;
        }

        // Condition 1 : Divisible par 5 ou 7
        if (n % 5 == 0 || n % 7 == 0) {
            somme += n;
        }

        // Condition 3 : La somme dépasse 5000
        if (somme > 5000) {
            printf("Somme > 5000 détectée (n=%d). Arrêt.\n", n);
            break;
        }
    }

    printf("Somme finale : %d\n", somme);
    return 0;
}

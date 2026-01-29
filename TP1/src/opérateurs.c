#include <stdio.h>

int main() {
    // Initialisation des variables selon l'énoncé
    int a = 16;
    int b = 3;

    printf("Valeurs : a = %d, b = %d\n", a, b);
    printf("------------------------------\n");

    // 1. Addition
    printf("1. Addition (a + b)          : %d\n", a + b);

    // 2. Soustraction
    printf("2. Soustraction (a - b)       : %d\n", a - b);

    // 3. Multiplication
    printf("3. Multiplication (a * b)     : %d\n", a * b);

    // 4. Division (entière)
    printf("4. Division (a / b)           : %d\n", a / b);

    // 5. Modulo (reste de la division)
    printf("5. Modulo (a %% b)             : %d\n", a % b);

    // 6. Comparaison d'égalité (renvoie 1 pour vrai, 0 pour faux)
    printf("6. Est-ce que a == b ?        : %s\n", (a == b) ? "true" : "false");

    // 7. Comparaison de supériorité
    printf("7. Est-ce que a > b ?         : %s\n", (a > b) ? "true" : "false");

    return 0;
}

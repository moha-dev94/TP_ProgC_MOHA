#include <stdio.h>

int main() {
    int compteur = 5; // Doit être < 10
    
    printf("Version boucle FOR :\n");
    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            // Conditions pour afficher '*' :
            // Première colonne (j==1), dernière colonne (j==i) ou dernière ligne (i==compteur)
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }

    printf("\nVersion boucle WHILE :\n");
    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            if (j == 1 || j == i || i == compteur) printf("* ");
            else printf("# ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

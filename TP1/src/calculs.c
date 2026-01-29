#include <stdio.h>

int main() {
    int num1 = 10, num2 = 3;
    char op = '&'; // Testez avec +, -, *, /, %, &, |, ~

    switch (op) {
        case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
        case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
        case '/': 
            if(num2 != 0) printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else printf("Erreur : Division par zéro\n");
            break;
        case '%': printf("%d %% %d = %d\n", num1, num2, num1 % num2); break;
        case '&': printf("%d & %d = %d\n", num1, num2, num1 & num2); break;
        case '|': printf("%d | %d = %d\n", num1, num2, num1 | num2); break;
        case '~': printf("~%d = %d\n", num1, ~num1); break;
        default: printf("Opérateur inconnu.\n");
    }
    return 0;
}

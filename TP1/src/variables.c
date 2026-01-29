#include <stdio.h>

int main() {
    // i. char (signé et non-signé)
    char c = 'A';
    unsigned char uc = 255;

    // ii. short
    short s = -32768;
    unsigned short us = 65535;

    // iii. int
    int i = -123456;
    unsigned int ui = 123456U;

    // iv. long int
    long int li = -987654321L;
    unsigned long int uli = 987654321UL;

    // v. long long int
    long long int lli = -123456789012345LL;
    unsigned long long int ulli = 123456789012345ULL;

    // vi. float
    float f = 3.14f;

    // vii. double
    double d = 3.1415926535;

    // viii. long double
    long double ld = 3.141592653589793238L;

    // --- AFFICHAGE ---

    printf("--- Entiers ---\n");
    printf("char : %c, unsigned char : %u\n", c, uc);
    printf("short : %hd, unsigned short : %hu\n", s, us);
    printf("int : %d, unsigned int : %u\n", i, ui);
    printf("long : %ld, unsigned long : %lu\n", li, uli);
    printf("long long : %lld, unsigned long long : %llu\n", lli, ulli);

    printf("\n--- Nombres a virgule ---\n");
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}

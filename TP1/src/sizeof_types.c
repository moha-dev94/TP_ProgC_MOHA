#include <stdio.h>

int main() 
{

  printf("Taille types de base en octets :");
  printf("================================= : \);

  //1. char
  printf("char : %zu, unsigned char : %zu\n", sizeof(char), sizeof(unsigned char));

    //2. short
  printf("short   : %zu", sizeof(short),sizeof(usigned short));

    //3. int
  printf("short   : %zu", sizeof(int),sizeof(usigned int));

    //4. long int
  printf("short   : %zu", sizeof(long int),sizeof(usigned long int));

    //5. long long int
  printf("short   : %zu", sizeof(long long int),sizeof(usigned long long int));

    //6. float
  printf("float   : %zu", sizeof(float));

    //7. double
  printf("double   : %zu", sizeof(double));

    //8. long double
  printf("long double   : %zu", sizeof(long double));

  return 0;
  
}




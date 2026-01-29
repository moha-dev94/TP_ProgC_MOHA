#include <stdio.h>

int main() 
{

  printf("Taille types de base en octets :");
  printf("================================= : \n");
    
  //1. char
  printf("char : %zu, unsigned char : %zu\n", sizeof(char), sizeof(unsigned char));

    //2. short
  printf("short   : %zu, unsigned short : %zu\n", sizeof(short),sizeof(unsigned short));

    //3. int
  printf("short   : %zu, unsigned int : %zu\n", sizeof(int),sizeof(usigned int));

    //4. long int
  printf("short   : %zu, unsigned long int : %zu\n", sizeof(long int),sizeof(usigned long int));

    //5. long long int
  printf("short   : %zu, unsigned long long int : %zu\n", sizeof(long long int),sizeof(usigned long long int));

    //6. float
  printf("float   : %zu", sizeof(float));

    //7. double
  printf("double   : %zu", sizeof(double));

    //8. long double
  printf("long double   : %zu", sizeof(long double));

  return 0;
}







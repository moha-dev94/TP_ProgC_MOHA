#include <stdio.h>

int main() 
{

  printf("Taille types de base en octets :");
  printf("================================= : \);

  //1. char
  printf("char   : %zu\, sizeof(char));
  printf("unsigned char : zu%", sizeof(unsigned char));

    //2. short
  printf("short   : %zu", sizeof(short));
  printf("unsigned short : zu%", sizeof(unsigned short));

    //3. int
  printf("int   : %zu", sizeof(int));
  printf("unsigned int : zu%", sizeof(unsigned int));

    //4. long int
  printf("long int   : %zu", sizeof(long int));
  printf("unsigned long int : zu%", sizeof(unsigned long int));

    //5. long long int
  printf("long long int   : %zu", sizeof(long long int));
  printf("unsigned long long int : zu%", sizeof(unsigned long long int));

    //6. float
  printf("float   : %zu", sizeof(float));

    //7. double
  printf("double   : %zu", sizeof(double));

    //8. long double
  printf("long double   : %zu", sizeof(long double));

  return 0;
  
}



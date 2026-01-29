#include <stdio.h>

int main() 
{

  printf("Taille types de base en octets :\n");
  printf("================================= : \n");

  //1. char
  printf("char   : %zu\n", sizeof(char));
  printf("unsigned char : zu%\n", sizeof(unsigned char));

    //2. short
  printf("short   : %zu\n", sizeof(short));
  printf("unsigned short : zu%\n", sizeof(unsigned short));

    //3. int
  printf("int   : %zu\n", sizeof(int));
  printf("unsigned int : zu%\n", sizeof(unsigned int));

    //4. long int
  printf("long int   : %zu\n", sizeof(long int));
  printf("unsigned long int : zu%\n", sizeof(unsigned long int));

    //5. long long int
  printf("long long int   : %zu\n", sizeof(long long int));
  printf("unsigned long long int : zu%\n", sizeof(unsigned long long int));

    //6. float
  printf("float   : %zu\n", sizeof(float));

    //7. double
  printf("double   : %zu\n", sizeof(double));

    //8. long double
  printf("long double   : %zu\n", sizeof(long double));

  return 0;
  
}


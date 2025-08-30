#include <stdio.h>

struct complex
{
   double real;
   double imag;
};

typedef struct complex complex;

complex c1;

int main()
{
   complex c2;
   printf("Size of c1 is %ld bytes\n",sizeof(c1));
   printf("Size of c2 is %ld bytes\n",sizeof(c2));
   printf("c1.real = %.2f\n",c1.real);
   printf("c1.imag = %.2f\n",c1.imag);
   printf("c2.real = %.2f\n",c2.real);
   printf("c2.imag = %.2f\n",c2.imag);  
}
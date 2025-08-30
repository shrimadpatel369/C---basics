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
   //using default initializer
   complex c2 = {1.0,2.0};
   //using designated initializer
   complex c3 = {.real = 3.0 , 4.0};
   //using compound literal
   c1 = (complex){5.0,6.0};

   printf("c1.real = %.2f\n",c1.real);
   printf("c1.imag = %.2f\n",c1.imag);
   printf("c2.real = %.2f\n",c2.real);
   printf("c2.imag = %.2f\n",c2.imag);
   printf("c3.real = %.2f\n",c3.real);
   printf("c3.imag = %.2f\n",c3.imag);
}
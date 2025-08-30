#include <stdio.h>

struct complex
{
   double real;
   double imag;
};

typedef struct complex complex;

int main()
{
   complex s1;
   s1.real = 10;
   s1.imag = 20;
   printf("%.2f\n",s1.real);
   printf("%.2f\n",s1.imag);
}
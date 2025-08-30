#include <stdio.h>

typedef struct
{
   double real;
   double imag;
}complex;


int main()
{
   complex c1;
   printf("Enter the real part of the complex number: ");
   scanf("%lf",&c1.real);
   printf("Enter the imaginary part of the complex number: ");
   scanf("%lf",&c1.imag);
   printf("The complex number is: %.2f + %.2fi \n",c1.real,c1.imag);
}
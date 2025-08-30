#include <stdio.h>

typedef struct
{
   double real;
   double imag;
}complex;

complex read_complex();

int main()
{
   complex c1 = read_complex();
   printf("The complex number is: %lf + %lfi\n",c1.real,c1.imag);
   complex c2 = read_complex();
   printf("The complex number is: %lf + %lfi\n",c2.real,c2.imag);
}

complex read_complex(){
   complex c;
   printf("Enter the real part of the complex number: ");
   scanf("%lf",&c.real);
   printf("Enter the imaginary part of the complex number: ");
   scanf("%lf",&c.imag);
   return c;
}
#include <stdio.h>

typedef struct
{
   double real;
   double imag;
}complex;

void print_complex(complex c);
complex read_complex();

int main()
{
   complex c1 = read_complex();
   print_complex(c1);
   complex c2 = read_complex();
   print_complex(c2);
}

void print_complex(complex c){
   printf("The complex number is: %0.2lf + %0.2lfi\n",c.real,c.imag);
}

complex read_complex(){
   complex c;
   printf("Enter the real part of the complex number: ");
   scanf("%lf",&c.real);
   printf("Enter the imaginary part of the complex number: ");
   scanf("%lf",&c.imag);
   return c;
}
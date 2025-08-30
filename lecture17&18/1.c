#include <stdio.h>
int g1(int a){
   printf("I am g1\n");
}
int f1(){
   printf("I am f1\n");
}
int main()
{
   printf("Entering Main\n");                   
   int(*p)(); // Creating function Pointer 
   p = &f1; // Binding function Pointer to f1
   (*p)(); // Invoking function indirectly via funtion pointer
   p = g1; // Binding function pointer to g1
   (*p)(); // Invoking function indirectly via funtion pointer
   printf("Leaving Main\n");
}
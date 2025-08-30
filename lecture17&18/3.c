#include <stdio.h>
void h1(){
   printf("I am h1\n");
}
void g1(){
  printf("I am g1\n");
}
void f1(){
  printf("I am f1\n");
}

int main()
{
   printf("Entering Main\n");                  
   void(*p[3])() = {h1, f1, g1}; // Array of function pointers
   for (int i = 0; i < 3; i++)
   {
       p[i]();
   }
   printf("Leaving Main\n");
}
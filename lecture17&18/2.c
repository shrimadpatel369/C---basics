#include <stdio.h>
int add(int v1, int v2){
   return v1 + v2;
}

int sub(int v1, int v2){
   return v1 - v2;
}

int main()
{
   printf("Entering Main\n");                   
   int(*p)(int,int);
   p = add;
   int r1 = p(1,2);
   p = sub;          
   int r2 = p(10,2);
   printf("add of two number is:%d\n",r1);
   printf("sub of two number is:%d\n",r2);
   printf("Leaving Main\n");
}
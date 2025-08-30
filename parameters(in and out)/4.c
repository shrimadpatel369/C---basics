#include<stdio.h>

void f1(const int * x,int * const y){
   *y = 2 * *x + 3;
}

int main(){
   int x=0, y=0;
   printf("Enter a value for x: ");
   scanf("%d", &x);
   printf("x = %d\n", x);
   f1(&x,&y);
   printf("y = %d\n", y);
}
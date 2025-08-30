#include<stdio.h>

int f1(int x){
   int y = 2*x + 3;
   return y;
}

int main(){
   int x, y;
   printf("Enter a value for x: ");
   scanf("%d", &x);
   y = f1(x);
   printf("y = %d\n", y);
}
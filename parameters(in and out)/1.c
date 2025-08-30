#include<stdio.h>

int x = 0;
int y = 0;

void f1(){
   y = 2*x + 3;
}

int main(){
   printf("Enter a value for x: ");
   scanf("%d", &x);
   f1();
   printf("y = %d\n", y);
}
#include<stdio.h>

void f1(int x,int *y){
   *y = 2*x + 3;
}

int main(){
   int x, y;
   printf("Enter a value for x: ");
   scanf("%d", &x);
   f1(x,&y);
   printf("y = %d\n", y);
}
#include<stdio.h>

int data[5] = {-1,-1,9,4,5};
int top = 2;

void print();

int main(){
  print();
}

void print(){
   printf("Printing Data\n");
   for(int i=top;i<5;i++){
       printf("%d\n",data[i]);
   }
}
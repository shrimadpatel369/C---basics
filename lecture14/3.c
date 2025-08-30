#include<stdio.h>

int data[5] = {-1,-1,-1,-1,-1};
int top = 5;

void print();
void push(int v);

int main(){
  push(5);
  push(4);
  push(9);
  print();
}

void print(){
   printf("Printing Data\n");
   for(int i=top;i<5;i++){
       printf("%d\n",data[i]);
   }
}

void push(int v){
   top--;
   data[top]=v;
}
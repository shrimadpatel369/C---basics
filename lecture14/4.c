#include<stdio.h>

int data[5] = {-1,-1,-1,-1,-1};
int top = 5;

void print();
void push(int v);

int main(){
  print();
  push(50);
  push(40);
  push(90);
  print();
  push(23);
  push(45);
  push(67);
  print();
}

void print(){
   printf("Printing Stack\n");
   if(top==5){
       printf("\tStack is empty\n");
       return;
   }
   for(int i=top;i<5;i++){
       printf("%d\n",data[i]);
   }
}

void push(int v){
   if(top==0){
       printf("\tStack is full\n");
       return;
   }
   top--;
   data[top]=v;
}
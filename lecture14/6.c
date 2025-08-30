#include<stdio.h>

int data[5] = {-1,-1,-1,-1,-1};
int top = 5;

void print();
void push(int v);
int pop();

int main(){
  print();
  push(5);
  push(4);
  push(9);
  print();
  int r = pop();
  printf("popped value is %d\n",r);
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

int pop(){
   if(top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       int v=data[top];
       top++;
       return v;
   }
}
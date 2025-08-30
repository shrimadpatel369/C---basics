#include<stdio.h>

typedef struct{
   int data[5];
   int top;
   void (*print)();
   void (*push)(int);
   int (*pop)();
   int (*peek)();
}Stack;

void print();
void push(int);
int pop();
int peek();

Stack stk={.top=5,.print=print,.push=push,.pop=pop,.peek=peek};

void print(){
   printf("Printing Stack\n");
   if(stk.top==5){
       printf("\tStack is empty\n");
       return;
   }
   for(int i=stk.top;i<5;i++){
       printf("%d\n",stk.data[i]);
   }
}

void push(int v){
   if(stk.top==0){
       printf("\tStack is full\n");
       return;
   }
   stk.top--;
   stk.data[stk.top]=v;
}

int pop(){
   if(stk.top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       int v=stk.data[stk.top];
       stk.top++;
       return v;
   }
}

int peek(){
   if(stk.top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       return stk.data[stk.top];
   }
}


int main(){
   printf("Welcome to Stack\n");
   stk.print();
   stk.push(10);
   stk.push(20);
   stk.push(30);
   int r1 = stk.pop();
   printf("Popped value is %d\n",r1);
   stk.print();
}
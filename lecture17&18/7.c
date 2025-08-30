#include<stdio.h>

struct Stack{
   int data[5];
   int top;
   void (*print)(struct Stack *);
   void (*push)(struct Stack *,int);
   int (*pop)(struct Stack *);
   int (*peek)(struct Stack *);
};
typedef struct Stack Stack;

void print(Stack *);
void push(Stack *,int);
int pop(Stack *);
int peek(Stack *);

Stack stk1={.top=5,.print=print,.push=push,.pop=pop,.peek=peek};
Stack stk2={.top=5,.print=print,.push=push,.pop=pop,.peek=peek};

void print(Stack *stk){
   printf("Printing Stack\n");
   if(stk->top==5){
       printf("\tStack is empty\n");
       return;
   }
   for(int i=stk->top;i<5;i++){
       printf("%d\n",stk->data[i]);
   }
}

void push(Stack *stk,int v){
   if(stk->top==0){
       printf("\tStack is full\n");
       return;
   }
   stk->top--;
   stk->data[stk->top]=v;
}

int pop(Stack *stk){
   if(stk->top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       int v=stk->data[stk->top];
       stk->top++;
       return v;
   }
}

int peek(Stack *stk){
   if(stk->top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       return stk->data[stk->top];
   }
}


int main(){
   printf("Welcome to Stack1\n");
   stk1.print(&stk1);
   stk1.push(&stk1,10);
   stk1.push(&stk1,20);
   stk1.push(&stk1,30);
   int r1 = stk1.pop(&stk1);
   printf("Popped value is %d\n",r1);
   stk1.print(&stk1);
   printf("Welcome to Stack2\n");
   stk2.print(&stk2);
   stk2.push(&stk2,11);
   stk2.push(&stk2,22);
   stk2.push(&stk2,33);
   int r2 = stk2.pop(&stk2);
   printf("Popped value is %d\n",r2);
   stk2.print(&stk2);
}
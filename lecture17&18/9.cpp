#include<cstdio>

struct Stack{
   int data[5];
   int top;
   void print();
   void push(int);
   int pop();
   int peek();
};

void Stack::print(){
   printf("Printing Stack\n");
   if(this->top==5){
       printf("\tStack is empty\n");
       return;
   }
   for(int i=this->top;i<5;i++){
       printf("%d\n",this->data[i]);
   }
}

void Stack::push(int v){
   if(this->top==0){
       printf("\tStack is full\n");
       return;
   }
   this->top--;
   this->data[this->top]=v;
}

int Stack::pop(){
   if(this->top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       int v=this->data[this->top];
       this->top++;
       return v;
   }
}

int Stack::peek(){
   if(this->top==5){
       printf("\tStack is empty\n");
       return -1;
   }
   else{
       return this->data[this->top];
   }
}


int main(){
   printf("Welcome to Stack1\n");
   Stack stk1;
   stk1.top=5;
   Stack stk2;
   stk2.top=5;
   stk1.print();
   stk1.push(10);
   stk1.push(20);
   stk1.push(30);
   int r1 = stk1.pop();
   printf("Popped value is %d\n",r1);
   stk1.print();
   printf("Welcome to Stack2\n");
   stk2.print();
   stk2.push(11);
   stk2.push(22);
   stk2.push(33);
   int r2 = stk2.pop();
   printf("Popped value is %d\n",r2);
   stk2.print();
}
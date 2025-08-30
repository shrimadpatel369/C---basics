#include<cstdio>

struct Stack{
  private:
      int data[5];
      int top;
  public:
      void init();
      void print();
      void push(int v);
      int pop();
      int peek();
};


void Stack::init(){
  top=5;
}
void Stack::print(){
  printf("Printing Stack\n");
  if(top==5){
      printf("\tStack is empty\n");
      return;
  }
  for(int i=top;i<5;i++){
      printf("%d\n",data[i]);
  }
}
void Stack::push(int v){
  if(top==0){
      printf("\tStack is full\n");
      return;
  }
  top--;
  data[top]=v;
}
int Stack::pop(){
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
int Stack::peek(){
  if(top==5){
      printf("\tStack is empty\n");
      return -1;
  }
  else{
      return data[top];
  }
}

Stack stk1;
Stack stk2;

int main(){
   printf("Welcome to Stack1\n");
   stk1.init();
   stk1.print();
   stk1.push(10);
   stk1.push(20);
   stk1.push(30);
   int r1 = stk1.pop();
   printf("Popped value is %d\n",r1);
   stk1.print();
   printf("Welcome to Stack2\n");
   stk2.init();
   stk2.print();
   stk2.push(33);
   stk2.push(44);
   stk2.push(55);
   int r2 = stk2.pop();
   printf("Popped value is %d\n",r2);
   stk2.print();
}
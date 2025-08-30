#include <stdio.h>

int data[5]={-1,-1,-1,-1,-1};
int top = 5;

void print(){
   printf("Printing Stack\n");
   if (top == 5){
    printf("stack is empty\n");
    return;
   }
   for(int i = top; i<5;i++){
    printf("%d\n",data[i]);
   }
}

void push(int v){
    if (top == 0){
        printf("\t stack is full\t\n");
        return;
    }
    top--;
    data[top] = v;
}

int pop(){
    if (top == 5){
        printf("\t stack is empty\t\n");
        return -1;
    }
    else{
       int v=data[top];
       top++;
       return v;
   }
}

int peek(){
    if (top==5){
        printf("\tStack is empty\n");
        return -1;
    }
    else{
        return data[top];
    }
}

int main(){
    print();
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    int r = pop();
    printf("the value poped is :%d\n",r);
    print();
    int s = peek();
    printf("the peeked value is :%d\n",s);
    print();    
}




 





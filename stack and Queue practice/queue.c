#include <stdio.h>

int data[5]={0,0,0,0,0};
int top = 0;

void print(){
   printf("Printing queue\n");
   if (top == 0){
    printf("queue is empty\n");
    return;
   }
   for(int i = 0; i<5;i++){
    printf("%d\n",data[i]);
   }
}

void enqueue(int v){
    if (top == 5){
        printf("\t queue is full\t\n");
        return;
    }
    top++;
    data[top] = v;
}

int dequeue(){
    if (top == 0){
        printf("\t queue is empty\t\n");
        return -1;
    }
    int v = data[0];
    for (int i=0;i< top -1;i++){
        data[i] = data[i+1];
    }
    top--;
    return v;
}

int peek(){
    if (top==0){
        printf("\t queue is empty\n");
        return -1;
    }
    else{
        return data[0];
    }
}

int main(){
    print();
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    enqueue(6);
    int r = dequeue();
    printf("the value poped is :%d\n",r);
    print();
    int s = peek();
    printf("the peeked value is :%d\n",s);
    print();    
}




 





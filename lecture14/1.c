#include<stdio.h>

int data[5] = {-1,-1,-1,-1,-1};
void print();

int main(){
    printf("Traversing and Printing\n");
    print();
}

void print(){
    for(int i = 0; i < 5 ; i++){
        printf("%d\n",data[i]);
  }
}
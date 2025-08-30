#include<stdio.h>

void n(int v){
    if(v <= 0) return ;
    if(v == 1) puts("Namaste");
}
   

void n2(){
    puts("Namaste");
    n(1);
}

void n3(){
    puts("Namaste");
    n2();
}

void n4(){
    puts("Namaste");
    n3();
}

void n5(){
    puts("Namaste");
    n4();
}

int main(){
    n5();
    printf("\n");
    n4();
    printf("\n");
    n3();
    printf("\n");
    n2();
    printf("\n");
    n(1);
    printf("\n");
    n(0);
    return 0;
}
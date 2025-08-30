#include<stdio.h>

void n1(){
    puts("Namaste");
}

void n2(){
    puts("Namaste");
    n1();
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
    n1();
    return 0;
}
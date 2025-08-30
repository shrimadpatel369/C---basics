#include<stdio.h>

void n(int v){
    if(v <= 0) return ;
    if(v == 1) puts("Namaste");
    if(v == 2){
        puts("Namaste");
        n(1);
    }
}
   

void n3(){
    puts("Namaste");
    n(2);
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
    printf("---------------------------");
    n4();
    printf("---------------------------");
    n3();
    printf("---------------------------");
    n(2);
    printf("---------------------------");
    n(1);
    printf("---------------------------");
    n(0);
    return 0;
}
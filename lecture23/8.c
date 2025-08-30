#include<stdio.h>

void n(int v){
    if(v <= 0) return;
    if(v == 1){
        puts("Namaste");
        n(0);
    }
    if(v == 2){
        puts("Namaste");
        n(1);
    }
    if(v == 3){
        puts("Namaste");
        n(2);
    }
    if(v == 4){
        puts("Namaste");
        n(3);
    }
    if(v == 5){
        puts("Namaste");
        n(4);
    }
}


int main(){
    n(5);
    printf("---------------------------\n");
    n(4);
    printf("---------------------------\n");
    n(3);
    printf("---------------------------\n");
    n(2);
    printf("---------------------------\n");
    n(1);
    printf("---------------------------\n");
    n(0);
    return 0;
}
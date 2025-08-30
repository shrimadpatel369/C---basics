#include<stdio.h>

void n(int v){
    if(v <= 0) return;
    puts("Namaste");
    n(v-1);
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
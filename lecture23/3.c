#include<stdio.h>

void n4(){
    puts("Namaste");
    puts("Namaste");  
    puts("Namaste");  
    puts("Namaste");  
}
   
void n5(){
    puts("Namaste");
    n4();
}

int main(){
    n5();
    printf("\n");
    n4();
    return 0;
}
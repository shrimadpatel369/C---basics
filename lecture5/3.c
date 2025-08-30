#include <stdio.h>

int main(){
    for (int i =0;i<3;i++){
        puts("Hello");
        if (i == 1 != i==2){
            puts ("University");
            continue;
        }
        puts("World");
    }
}
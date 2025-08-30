#include <stdio.h>

void f1(int b[4]){
        for(int i=0;i<4;i++){
            printf("%d\n",b[i]);
        }
    }

int main(){
    int a[4] = {11,22,33,44};
    f1(a);
}
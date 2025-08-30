#include<stdio.h>

int main(){
    int a[5] = {10,20,30,40,50};
    int acc = 0;
    for(int i = 0 ; i < 5 ; i++){
        acc = acc + a[i];
    }
    printf("Result = %d\n",acc);
    printf("siyami");
}
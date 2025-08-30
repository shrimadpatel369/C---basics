#include<stdio.h>

int main(){

    int a[] = {11,22,33,44,55,66};

    for (int i = 0; i < sizeof(a)/sizeof(int) ; i++)
    {
        if(a[i] > 0){
            printf("%d\n", a[i]);
        }
       
    }
}
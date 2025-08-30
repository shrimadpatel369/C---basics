#include<stdio.h>

int main()
{
    int a[3] = {11,22,33};
    for(int i = 0 ; i < 3 ; i++){
        int j = a[i] * 2;
        printf("%d\n", j);
        }
}
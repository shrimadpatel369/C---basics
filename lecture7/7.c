#include<stdio.h>
int main()
{
    int a[3] = {11,22,33};
    int b[3];
    printf("%d\n",sizeof(a));
    printf("%d\n",sizeof(b));
    for(int i = 0 ; i < 3 ; i++)
    {
        b[i] = a[i] * 2;
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\n",b[i]);
    }
}
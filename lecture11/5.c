#include<stdio.h>
int main()
{
     int i = 10;
     printf("Content of i is %d\n",i);
     printf("Size of i is %lu\n",sizeof(i));
     printf("Address of i is%d\n", &i);
     printf("%d\n", &i + 1);
     printf("%d\n", &i + 2);
}
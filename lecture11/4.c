#include<stdio.h>

void mySwap(int *p, int *q)
{
  printf("*p = %d\n",*p);
  printf("*q = %d\n",*q);
  int temp = *p;
  *p = *q;
  *q = temp;
  printf("*p = %d\n",*p);
  printf("*q = %d\n",*q);
}

int main()
{
  int i = 10;
  int j = 20;
 
  printf("i = %d\n",i);
  printf("j = %d\n",j);
  printf("Swapping ... \n");
  mySwap(&i,&j);
  printf("i = %d\n",i);
  printf("j = %d\n",j);
}


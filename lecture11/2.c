#include<stdio.h>

int main()
{
  int i = 10;
  int j = 20;
  int *p = &i;
  int *q = &j;
  printf("i = %d\n",*p);
  printf("j = %d\n",*q);
  printf("Swapping ... \n");
  int temp = *p;
  *p = *q;
  *q = temp;
  printf("i = %d\n",*p);
  printf("j = %d\n",*q);
}
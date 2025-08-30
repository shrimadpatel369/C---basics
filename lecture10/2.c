#include <stdio.h>

int main()
{
  int i = 10;
  int j = 20;
  int *p = &i;
  int *q = NULL;
  q = &j;
  printf("i = %d\n",i);
  printf("j = %d\n",j);
  printf("*p = %d\n",*p);
  printf("*q = %d\n",*q);
  *p = 67;
  *q = *q + *p;
  p = q;
  *p = *q + 1;
  printf("i = %d\n",i);
  printf("j = %d\n",j);
   printf("*p = %d\n",*p);
   printf("*q = %d\n",*q);
}


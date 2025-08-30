#include<stdio.h>

int main()
{
  int i = 10;
  int j = 20;
  printf("i = %d\n",i);
  printf("j = %d\n",j);
  printf("Swapping ... \n");
  int temp = i;
  i = j;
  j = temp;
  printf("i = %d\n",i);
  printf("j = %d\n",j);
}
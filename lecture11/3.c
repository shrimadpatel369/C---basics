#include<stdio.h>

void mySwap(int v1, int v2)
{
  printf("v1 = %d\n",v1);
  printf("v2 = %d\n",v2);
  int temp = v1;
  v1 = v2;
  v2 = temp;
  printf("v1 = %d\n",v1);
  printf("v2 = %d\n",v2);
}

int main()
{
  int i = 10;
  int j = 20;
 
  printf("i = %d\n",i);
  printf("j = %d\n",j);
  printf("Swapping ... \n");
  mySwap(i,j);
  printf("i = %d\n",i);
  printf("j = %d\n",j);
}


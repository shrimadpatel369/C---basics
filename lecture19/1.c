#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Allocating Integer on Heap\n");
  int* p = (int*)malloc(sizeof(int));
  *p = 10;
  printf("*p = %d\n",*p);
  free(p);
}
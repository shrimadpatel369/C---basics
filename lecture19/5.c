#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Allocating Array on Heap\n");
  int size = 0;
  scanf("%d",&size);
  int*  p = (int*)malloc(sizeof(int)*size);
  for (int i = 0; i < size ;i++){
      scanf("%d",&p[i]);
  }
  printf("Printing Array\n");
  for (int j = 0; j < size ;j++){
     printf("%d\n",p[j]);
  }
  free(p);
}
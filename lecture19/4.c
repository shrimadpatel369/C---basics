#include <stdio.h>
#include <stdlib.h>

int main()
{
  printf("Allocating Array on Heap\n");
  int size = 0;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  int*  p = (int*)malloc(sizeof(int)*size);
  for (int i = 0; i < size ;i++){
      printf("Enter the %d element: ",i);
      scanf("%d",&p[i]);
  }
  printf("Printing Array\n");
  for (int j = 0; j < size ;j++){
     printf("%d\n",p[j]);
  }
  free(p);
}   
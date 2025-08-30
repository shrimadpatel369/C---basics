#include <stdio.h>
#include <stdlib.h>

int size = 0;

int* read_data(){
  scanf("%d",&size);
  int*  p = (int*)malloc(sizeof(int)*size);
  for (int i = 0; i < size ;i++){
      scanf("%d",&p[i]);
  }
  return p;
}

int main()
{
  int *p = read_data();
  printf("Printing Array\n");
  for (int j = 0; j < size ;j++){
     printf("%d\n",p[j]);
  }
  free(p);
}
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

void print_data(int *p){
  for (int j = 0; j < size ;j++){
     printf("%d\n",p[j]);
  }
}

int main()
{
  int *p = read_data();
  print_data(p);
  free(p);
}
#include <stdio.h>
#include <stdlib.h>

int size = 0;

int* read_data(){
  printf("Enter the size of the array:");
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

int find_highest(int *p){
  int max = p[0];
  for(int i = 0; i < size; i++){
      if(p[i] > max){
          max = p[i];
      }
  }
  return max;
}


int main()
{
  int *p = read_data();
  printf("\n");
  print_data(p);
  int max = find_highest(p);
  printf("Max = %d\n",max);
  free(p);
}
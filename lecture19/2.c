#include <stdio.h>
#include <stdlib.h>

void integer()
{
  printf("Allocating Array on Heap\n");
  int*  p = (int*)malloc(sizeof(int)*4);
  for (int i = 0; i < 4 ;i++){
      p[i] = i*100;
  }
  printf("Printing Array\n");
  for (int j = 0; j < 4 ;j++){
     printf("%d\n",p[j]);
  }
  free(p);
}

void floatnumber(){
  printf("Allocating Array on Heap\n");
  float* p = (float*)malloc(sizeof(float)*4);
  for (int i = 0; i < 4; i++){
    p [i] = i*100;
  }
  printf("Printing Array\n");
  for (int j = 0; j <4; j++){
    printf("%f\n",p[j]);
  }
  free(p);
}

void charvariable(){
  printf("Allocating Array on Heap\n");
  char* p = (char*)malloc(sizeof(char)*4);
  for (char  i = 0; i < 4; i++){
    p [i] = i*50;
  }
  printf("Printing Array\n");
  for (char j = 0; j <4; j++){
    printf("%c\n",p[j]);
  }
  free(p);
}

int main(){
  integer();
  printf("\n");
  floatnumber();
  printf("\n");
  charvariable();
}
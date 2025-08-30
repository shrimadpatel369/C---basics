#include <stdio.h>

int* f1(int v,int b[]){
  static int c[4];
  printf("Entering f1\n");
  printf("Printing b in f1\n");
  for(int i=0;i<v;i++)
     c[i] = b[i];
  printf("Exiting f1\n");
  return c;
}

int main()
{
  printf("Entering main\n");
  int a[4] = {11,22,33,44};
  int * q = f1(2,a);
  printf("Printing q in main\n");
  for(int i=0;i<4;i++)
     printf("%d ",q[i]);
  printf("Exiting main\n");
}


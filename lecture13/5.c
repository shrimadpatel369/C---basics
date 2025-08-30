#include <stdio.h>

void f1(int v,int b[]){
  printf("Entering f1\n");
  printf("Printing b in f1\n");
  for(int i=0;i<v;i++)
     printf("%d\n",b[i]);
  printf("Exiting f1\n");
}

int main()
{
  printf("Entering main\n");
  int a[4] = {11,22,33,44};
  f1(2,a);
  printf("Printing a in main\n");
  for(int i=0;i<4;i++)
     printf("%d\n",a[i]);
  printf("Exiting main\n");
}


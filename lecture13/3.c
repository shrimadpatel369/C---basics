#include <stdio.h>

void f1(int *b){
  printf("Entering f1\n");
  printf("Printing b in f1\n");
  for(int i=0;i<4;i++)
     printf("%d\n",*(b+i));
  b[0] = 100;
  printf("Exiting f1\n");
}

int main()
{
  printf("Entering main\n");
  int a[4] = {11,22,33,44};
  f1(a);
  printf("Printing a in main\n");
  for(int i=0;i<4;i++)
     printf("%d\n",a[i]);
  printf("Exiting main\n");
}


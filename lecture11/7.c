#include<stdio.h>
int main()
{
      int i = 10;
      printf("Content of i is %d\n",i);
      printf("Address of i is %p\n", &i);
      printf("%p\n", &i + 1);
      printf("%p\n", &i + 2);
      float g = 23.4;
      printf("Content of g is %f\n",g);
      printf("Address of g is %p\n", &g);
      printf("%p\n", &g + 1);
      printf("%p\n", &g + 2);
      *(&g) = 92.7;
      *(&i) = 20 + *(&i);
      printf("Content of g is %f\n",g);
      printf("Content of i is %d\n",i);
      *(&g + 1) = 105.6;
      printf("Content of g is %f\n",g);
      printf("Content of i is %d\n",i);
}
#include<stdio.h>
int main()
{
     int i = 10;
     printf("Content of i is %d\n",i);
     printf("Size of i is %lu\n",sizeof(i));
     printf("Address of i is%d\n", &i);
     printf("%d\n", &i + 1);
     printf("%d\n", &i + 2);
     float g = 23.4;
     printf("Content of g is %f\n",g);
     printf("Size of g is %lu\n",sizeof(g));
     printf("Address of g is %d\n", &g);
     printf("%d\n", &g + 1);
     printf("%d\n", &g + 2);
     double h = 3.4;
     printf("Content of h is %lf\n",h);
     printf("Size of g is %lu\n",sizeof(h));
     printf("Address of h is %d\n", &h);
     printf("%d\n", &h + 1);
     printf("%d\n", &h + 2);
}
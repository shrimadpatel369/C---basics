#include<stdio.h>
int main()
{
      int a[4] = { 11, 22, 33, 44 };
      printf("size of a %lu\n",sizeof(a));
      printf("Address of a %p\n",a);
      printf("Address of a %p\n",&a);
      for (int i = 0; i < 4; i++){
           printf("size of a[%d] is %lu\n",i,sizeof(a[i]));
           printf("Content of a[%d] is %d\n",i, a[i]);
           printf("Address of a[%d] is %p\n",i, &a[i]);
      }
}
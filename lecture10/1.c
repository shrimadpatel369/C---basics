#include <stdio.h>

int main(){
   int i = 10;
   printf("i has content %d\n",i);
   printf("i has address %p\n",&i);
   printf("i has size %lu\n",sizeof(i));
   int* p;
   p = &i;
   printf("p has content %p\n",p);
   printf("p has address %p\n",&p);
   printf("p has size %lu\n",sizeof(p));
   printf("p points to %d\n",*p);
   *p = 20;
   printf("i has content %d\n",i);
   printf("p points to %d\n",*p);
}
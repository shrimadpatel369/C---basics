#include <stdio.h>

int main(){
   int i = 10;
   printf("i has content %d\n",i);
   printf("i has address %p\n",&i);
   printf("i has size %lu\n",sizeof(i));
   int j = 20;
   printf("j has content %d\n",j);
   printf("j has address %p\n",&j);
   printf("j has size %lu\n",sizeof(j));
   j = i;
   printf("i has content %d\n",i);
   printf("j has content %d\n",j);
}
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

int find_highest(int s,int *p){
   int max = p[0];
   int index = 0;
   for(int i = 0; i < s ; i++){
       if(p[i] > max){
           max = p[i];
           index = i;
       }
   }
   return index;
}

void swap(int *v1, int *v2)
{
   int temp = *v1;
   *v1 = *v2;
   *v2 = temp;
}

void selection_sort(int *p){
   for(int i=0;i<size;i++){
       int j = find_highest(size-i,p);
       swap(&p[j],&p[size-i-1]);
   }
}

int main()
{
   int *p = read_data();
   printf("\n");
   printf("Before sorting:\n");
   print_data(p);
   printf("\n");
   selection_sort(p);
   printf("After sorting:\n");
   print_data(p);
   free(p);
}
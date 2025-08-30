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

void swap(int *v1, int *v2)
{
   int temp = *v1;
   *v1 = *v2;
   *v2 = temp;
}

void shift_highest(int s,int *p){
   for(int i = 0; i < s-1 ; i++){
       if(p[i] > p[i+1]){
           swap(&p[i],&p[i+1]);
       }
   }
}

void bubble_sort(int *p){
   for(int i=0;i<size;i++){
       shift_highest(size-i,p);
   }
}

int main()
{
   int *p = read_data();
   printf("\n");
   printf("Before sorting:\n");
   print_data(p);
   printf("\n");
   bubble_sort(p);
   printf("After sorting:\n");
   print_data(p);
   free(p);
}
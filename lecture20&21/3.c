#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int* read_data(int *size){
 printf("Enter a size of the array: ");
 scanf("%d",size);
 int*  p = (int*)malloc(sizeof(int) * *size);
 for (int i = 0; i < *size ;i++){
     printf("Enter a number: ");
     scanf("%d",&p[i]);
 }
 return p;
}
void print_data(int size,int *p){
    printf("Array: ");
 for (int j = 0; j < size ;j++){
    printf("%d ",p[j]);
 }
}
int max(int size,int data[]) {
   int maxValue = data[0];
   for (int i = 1; i < size; i++) {
       if (data[i] > maxValue) {
           maxValue = data[i];
       }
   }
   return maxValue;
}
int main(){
   int size = 0;
   int *p = read_data(&size);
   print_data(size, p);
   printf("\n");
   printf("Max: %d\n", max(size,p));
   return 0;
}
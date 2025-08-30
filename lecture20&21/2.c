#include<stdio.h>

int main(){
   int a[4] = {};
   for(int i = 0 ; i < 4 ; i++){
       printf("Enter a number: ");
       scanf("%d",&a[i]);
   }
   int highest = a[0];
   for(int i = 1 ; i < 4 ; i++){
       if(a[i] > highest){
           highest = a[i];
       }
   }
   printf("Highest = %d\n",highest);
}
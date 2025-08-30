#include <stdio.h>

int main(){
   printf("Working with files\n");
   FILE *fp = fopen("output.txt", "w");
   if(fp == NULL){
       printf("Error opening file");
       return 1;
   }
   fprintf(fp, "This is a file created by C program");
   fclose(fp);
}
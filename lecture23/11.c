#include <stdio.h>

int main(){
   printf("Working with files\n");
   FILE *fp = fopen("output.txt", "a");
   if(fp == NULL){
       printf("Error opening file");
       return 1;
   }
   fprintf(fp,"\n");
   fprintf(fp, "Appending data to existing file\n");
   fclose(fp);
}
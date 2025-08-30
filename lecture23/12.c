#include <stdio.h>

int main(){
   char data[1000];
   FILE *fp = fopen("input.txt", "r");
   if(fp == NULL){
       printf("Error opening file");
       return 1;
   }
   fprintf(fp,"\n");
   fscanf(fp,"%s",data);
   printf("%s\n", data);
   fclose(fp);
}
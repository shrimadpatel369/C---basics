#include <stdio.h>

char input[50];
int main()
{
   fgets(input,50,stdin);
   printf("You read: %s\n", input);
   int length = 0;
   for(int i=0 ; i < 50 ; i++){
       if(input[i] != '\0') length++;
   }
   printf("length is %d",length);
}
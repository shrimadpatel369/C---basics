#include<stdio.h>

void task(char ch);

int main(){
   puts("task1");
   task('@');
   puts("task3");
   task('#');
}

void task(char ch)
{
   puts("aaa");
   putchar(ch);
   putchar('\n');
   puts("ccc");
}
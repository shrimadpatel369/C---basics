#include <stdio.h>

int main(){
    puts("<h1> Welcome to DropDown </h1>");
    puts("<select>");
    for (int i =0; i<30;i = i+2){
        puts("<option>");
        printf("%d\n",i);
        puts("</option>");
    }
    puts("</select>");
}
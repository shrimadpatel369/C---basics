#include <stdio.h>

int main()
{
    int i = 0;
    while (i < 10){
        i = i + 1;
        if (i == 4){
            puts("Bingo");
        }
        else{
            puts("next time");
        }
    }

}
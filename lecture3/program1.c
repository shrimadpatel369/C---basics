#include <stdio.h>
int main()
{
    char ch = '*';
    putchar(ch);
    putchar('\n');
    putchar(ch);
    putchar('\n');
    puts("Please enter your favourite Symbol");
    ch = getchar();
    puts("Hmm.. thanks, I captured your input in variable ch...");
    putchar(ch);
    putchar('\n');
    putchar(ch);
}
#include <stdio.h>

void main() {
    puts("This is Prisebot at your service :)");
    puts("Look at my echoing ability");
    puts("You type a single character followed by enter");
    puts("I will prompt it back");
    puts("Let's start..");
    char ch = getchar();
    puts("You typed...");
    putchar(ch);
    putchar('\n');
    puts("Wasn't I right? This is my echoing ability!!!");
}
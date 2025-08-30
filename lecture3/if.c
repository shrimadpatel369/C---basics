#include <stdio.h>

int main()
{
    char ch;
    puts("_/\\_ Prudence here!");
    puts("Would you mind typing a Symbol for me?");
    ch = getchar();
    if(ch == 'y'){
        puts("You typed character 'y' ");
    }
    if(ch == 'n'){
      puts("You typed character 'n' ");
    }
    if(ch == 'n'){
        puts("You typed character 'n' ");
    }
    if(ch == 'N'){
        puts("You typed character 'N' ");
    }
    puts(":: _/\\_ ::");
}


#include<stdio.h>

int main(){
  char ch;
  puts("_/\\_ Prudence Here!");
  puts("Would you mind typing a Symbol for me?");
  ch = getchar();
  if(ch == 'y'){
      puts("You said Yes");
  }
  else {
      puts("You didn't say Yes");
  }
  puts(":: _/\\_ ::");
}
#include<stdio.h>
#include<stdlib.h>

struct Sprite{
 int x;
 int y;
 char sym;
};

struct Sprite *p;

int main()
{
 p = (struct Sprite *)malloc(sizeof(struct Sprite));

 (*p).x = 10;
 (*p).y = 20;
 (*p).sym = '*';

 printf("%d\n",p->x);
 printf("%d\n",p->y);
 printf("%c\n",p->sym);
  free(p);
}
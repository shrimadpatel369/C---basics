#include <stdio.h>

struct sprite
{
   int x;
   int y;
   char sym;
};

void printSprite(sprite s);
void printSprite(sprite *s);

int main()
{
   sprite s1 = {1, 2, '*'};
   sprite *p;

   p = &s1;

   printSprite(s1);
   printSprite(&s1);

   printSprite(*p);
   printSprite(p);

   p->x = 11;
   p->y = 22;
   p->sym = '#';

   printSprite(s1);
   printSprite(&s1);

}

void printSprite(sprite s)
{
   printf("Printing Sprite --  pass by value\n");
   printf("x = %d\n", s.x);
   printf("y = %d\n", s.y);
   printf("sym = %c\n", s.sym);
}

void printSprite(sprite *q)
{
   printf("Printing Sprite --  pass by address\n");
   printf("x = %d\n", q->x);
   printf("y = %d\n", q->y);
   printf("sym = %c\n", q->sym);
}
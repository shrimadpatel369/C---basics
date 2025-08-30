#include <stdio.h>

struct sprite
{
   int x;
   int y;
   char sym;
};

void printSprite(struct sprite s)
{
   printf("Printing Sprite --  pass by value\n");
   printf("x = %d\n", s.x);
   printf("y = %d\n", s.y);
   printf("sym = %c\n", s.sym);
}

int main()
{
   struct sprite s1 = {1, 2, '*'};
   struct sprite *p;

   p = &s1;

   printf("Accessing state through structure variable\n");
   printSprite(s1);
   printf("Accessing state through pointer variable\n");
   printSprite(*p);
   printf("Modifying state through pointer variable\n");
   p->x = 11;
   p->y = 22;
   p->sym = '#';
   printf("Accessing state through structure variable\n");
   printSprite(s1);
}


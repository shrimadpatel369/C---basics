#include <stdio.h>

struct sprite
{
   int x;
   int y;
   char sym;
};

int main()
{
   struct sprite s1 = { 1, 2, '*' };
   struct sprite *p;

   p = &s1;

   printf("Accessing state through structure variable\n");
   printf("x = %d\n",s1.x);
   printf("y = %d\n",s1.y);
   printf("sym = %c\n",s1.sym);

   printf("Accessing state through pointer variable\n");
   printf("x = %d\n",(*p).x);
   printf("y = %d\n",(*p).y);
   printf("sym = %c\n",(*p).sym);

   printf("Modifying state through pointer variable\n");
   (*p).x = 11;
   (*p).y = 22;
   (*p).sym = '#';

   printf("Accessing state through structure variable\n");
   printf("x = %d\n",s1.x);
   printf("y = %d\n",s1.y);
   printf("sym = %c\n",s1.sym);
}

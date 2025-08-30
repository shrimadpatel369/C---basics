#include <stdio.h>
#include <iostream>
using namespace std;

struct Sprite
{
   int x;
   int y;
   char sym;
};

void printSprite(Sprite s);
void printSprite(Sprite *q);
Sprite readSprite();
void readSprite(Sprite *q);

int main()
{
   Sprite s1 = {1, 2, '*'};
   Sprite s2 = {5, 6, '$'};

   printSprite(s1);
   printSprite(&s2);

   s1 = readSprite();
   readSprite(&s2);

   printSprite(s1);
   printSprite(&s2);

}

void printSprite(Sprite s)
{
   printf("Printing Sprite --  pass by value\n");
   printf("x = %d\n", s.x);
   printf("y = %d\n", s.y);
   printf("sym = %c\n", s.sym);
}

void printSprite(Sprite *q)
{
   printf("Printing Sprite --  pass by address\n");
   printf("x = %d\n", q->x);
   printf("y = %d\n", q->y);
   printf("sym = %c\n", q->sym);
}

Sprite readSprite()
{
   Sprite s;
   cout << "Reading Sprite" << endl;
   cout << "Enter value for x position" << endl;
   cin >> s.x;
   cout << "Enter value for y position" << endl;
   cin >> s.y;
   cout << "Enter value for symbol" << endl;
   cin >> s.sym;
   cout << "Returning local structure by value" << endl;
   return s;
}

void readSprite(Sprite *q)
{
   cout << "Reading Sprite" << endl;
   cout << "Enter value for x position" << endl;
   cin >> q->x;
   cout << "Enter value for y position" << endl;
   cin >> q->y;
   cout << "Enter value for symbol" << endl;
   cin >> q->sym;
}
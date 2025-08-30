#include <iostream>

using namespace std;

struct Sprite
{
   int x;
   int y;
   char sym;
};

void printSprite(Sprite &s);
void readSprite(Sprite &q);

int main()
{
   Sprite s1 = {1, 2, '*'};
   Sprite s2 = {5, 6, '$'};

   printSprite(s1);
   printSprite(s2);

   readSprite(s1);
   readSprite(s2);

   printSprite(s1);
   printSprite(s2);

}

void printSprite(Sprite &s)
{
   cout << "Printing Sprite --  pass by reference" << endl;
   cout << "x = " << s.x << endl;
   cout << "y = " << s.y << endl;
   cout << "sym = " << s.sym << endl;
}

void readSprite(Sprite &q)
{
   cout << "Reading Sprite" << endl;
   cout << "Enter value for x position" << endl;
   cin >> q.x;
   cout << "Enter value for y position" << endl;
   cin >> q.y;
   cout << "Enter value for symbol" << endl;
   cin >> q.sym;
}
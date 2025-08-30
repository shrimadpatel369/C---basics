#include <iostream>
using namespace std;

class C1
{
public:
   int a;
   int b;
};

class C2
{
public:
   C1 obj;
   int c;
   int d;
};

void printC1(C1 *p)
{
   cout << "Entering printC1" << endl;
   cout << "a = " << p->a << endl;
   cout << "b = " << p->b << endl;
   cout << "Leaving printC1" << endl;
}

void printC2(C2 *p)
{
   cout << "Entering printC2" << endl;
   cout << "a = " << p->obj.a<< endl;
   cout << "b = " << p->obj.b << endl;
   cout << "c = " << p->c << endl;
   cout << "d = " << p->d << endl;
   cout << "Leaving printC2" << endl;
}

int main()
{
   C1 obj1;
   obj1.a = 1;
   obj1.b = 2;
   printC1(&obj1);

   C2 obj2;
   obj2.obj.a = 10;
   obj2.obj.b = 20;
   obj2.c = 30;
   obj2.d = 40;
   printC2(&obj2);
}
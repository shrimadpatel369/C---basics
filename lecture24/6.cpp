#include <iostream>
using namespace std;

class C1
{
public:
 int a;
 int b;
 void printC1()
 {
      cout << "Entering printC1" << endl;
      cout << "a = " << a << endl;
      cout << "b = " << b << endl;
      cout << "Leaving printC1" << endl;
 }
};

class C2 : public C1
{
public:
 int c;
 int d;
 void printC2()
 {
      cout << "Entering printC2" << endl;
      cout << "a = " << a << endl;
      cout << "b = " << b << endl;
      cout << "c = " << c << endl;
      cout << "d = " << d << endl;
      cout << "Leaving printC2" << endl;
 }

};



int main()
{
   C1 obj1;
   obj1.a = 1;
   obj1.b = 2;
   obj1.printC1();

   C2 obj2;
   obj2.a = 10;
   obj2.b = 20;
   obj2.c = 30;
   obj2.d = 40;
   obj2.printC2();
   obj2.printC1();
}
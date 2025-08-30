#include<iostream>
using namespace std;

class C1{
public:
   int a;
   int b;
};

int main(){
   C1 obj1;
   obj1.a = 10;
   obj1.b = 20;
   cout << "obj1.a = " << obj1.a << endl;
   cout << "obj1.b = " << obj1.b << endl;
}
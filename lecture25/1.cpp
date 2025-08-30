#include <iostream>
using namespace std;

class Artist{
   public:
       void draw();
};

void Artist::draw(){
   cout << "-----" << endl;
}

int main(){
   Artist a;
   a.draw();
}
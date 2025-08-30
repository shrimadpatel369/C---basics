#include <iostream>
using namespace std;

int id = 0;

class Artist{
   int id;
   public:
       Artist(){
           id = ::id++;
       }
       void draw();
       void introduce();
};


void Artist::draw(){
   cout << "-----" << endl;
}
void Artist::introduce()
{
   cout << "My Artist id is " << id << endl;
}

class DArtist : public Artist
{
   public:
       void say();
};

void DArtist::say(){
   cout << "Object Orientation has changed the world..." << endl;
}

int main(){
   Artist a;
   a.introduce();
   a.draw();
  
   Artist b;
   b.introduce();
   b.draw();
  
   DArtist c;
   c.introduce();
   c.draw();
   c.say();
}
#include <iostream>
using namespace std;

int id = 0;

class Artist{
       int id;
   public:
       Artist(){
           id = ::id++;
       }
       virtual void draw();
       void introduce();
};


void Artist::draw(){
   cout << "-----";
   cout << endl;
}

void Artist::introduce()
{
   cout << "My Artist id is " << id << endl;
}

class DArtist : public Artist
{
   public:
       void say();
       void draw();
};

void DArtist::say(){
   cout << "Object Orientation has changed the world..." << endl;
}

void DArtist::draw(){
   cout << "*";
   Artist::draw();
}

void stage1(Artist *p){
   p->draw();
}

void stage2(DArtist *q)
{
   q->draw();
}

int main(){
   Artist a;
   a.introduce();
   stage1(&a);
  
   DArtist b;
   b.introduce();
   stage2(&b);

   cout << "Sending DArtist (b) to Stage1" << endl;
   stage1(&b);
}
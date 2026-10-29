#include<iostream>
using namespace std;

  class Shape{ // this is automatically a abstract class.
    public:
   virtual void draw() = 0;
};

class Circle : public Shape{
    public:
    void draw(){
        cout<<"this is the circle drawing "<<endl;
    }
};

class Square : public Shape{
    public:
    void draw(){
        cout<<"this is the Square class "<<endl;
    }
};

int main(){
     
    Square S1;
    S1.draw();
     
    return 0;
}
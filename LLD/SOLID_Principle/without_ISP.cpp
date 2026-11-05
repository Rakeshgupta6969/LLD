#include<bits/stdc++.h>
using namespace std;

class shape{
    public:
    virtual void Area() = 0;
    virtual void volume() = 0;
};

class Rectangle : public shape{ //this is breaking ISP because here is no need of the volume method.
    public:
    void Area(){
        cout<<"the area of the rectangle is a*b "<<endl;
    }
    void volume(){
        throw logic_error("volume is not applicable in rectangle ");
    }
};

class Square : public shape{ // this is breaking ISP because here is no need of the volume method.
    public:
    void Area(){
        cout<<"the area of the Square is a*a "<<endl;
    }
    void volume(){
        throw logic_error("volume is not applicable in Square ");
    }
};


class Cube : public shape{
    public:
    void Area(){
        cout<<"the area of the cube is 6*a*a "<<endl;
    }
    void volume(){
     cout<<"the volume of the cube is a*a*a "<<endl;
    }
};


int main(){
    Rectangle * rec  = new Rectangle();
    rec -> Area();
    rec -> volume();
     

    Square * sqr = new Square();
    sqr -> Area();
    sqr -> volume();

    Cube * cb  = new Cube();
    cb -> Area();
    cb -> volume();

    return 0;
}



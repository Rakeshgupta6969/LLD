#include<bits/stdc++.h>
using namespace std;


// here we make two abstract/ interface for two specific purpose 
class TwoDShape{
    public:
    virtual void Area() = 0;
};

class ThreeDShape{
    public:
    virtual void Area() = 0;
    virtual void volume() = 0;
};


class Rectangle : public TwoDShape{ //this is breaking ISP because here is no need of the volume method.
    public:
    void Area(){
        cout<<"the area of the rectangle is a*b "<<endl;
    }
};

class Square : public TwoDShape{ // this is breaking ISP because here is no need of the volume method.
    public:
    void Area(){
        cout<<"the area of the Square is a*a "<<endl;
    }
};


class Cube : public ThreeDShape{
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

    Square * sqr = new Square();
    sqr -> Area();

    Cube * cb  = new Cube();
    cb -> Area();
    cb -> volume();

    return 0;
}



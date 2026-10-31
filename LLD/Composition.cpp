#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    void solve(){
        cout<<"the area of rectangle is a * b where a and b is the length and with of the rectangle"<<endl;
    }
};

class child : public Parent{
public:
    Parent * a;
    child(){
      a = new Parent();
    }

   void solve2(){
    cout<<"the parameter of rectangle is 2*(a + b) where a and b is the length and width of rectangle"<<endl;
   }
};

int main(){
    child * c = new child();
    c -> a -> solve(); // that means child has a parent type of relationship and this is Known as the composition.
    return 0;
}
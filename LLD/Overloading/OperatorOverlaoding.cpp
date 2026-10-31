#include<bits/stdc++.h>
using namespace std;

class Complex{
  public:
  int realNum;
  int imgNum;

  Complex(int r,int i){
    this -> realNum = r;
    this -> imgNum = i;
  }

  Complex operator+(const Complex & obj){
     return Complex(realNum + obj.realNum,imgNum + obj.imgNum);
  }

  ~Complex(){
    cout<<"Destructor is called"<<endl;
  }

};

int main(){
    Complex * C1 = new Complex(1,2);
    Complex * C2 = new Complex(3,4);

    Complex  C3 = *C1 + *C2;
    cout<<C3.realNum << "+" <<C3.imgNum <<"i"<<endl;
    delete C1;
    delete C2;
    return 0;
}
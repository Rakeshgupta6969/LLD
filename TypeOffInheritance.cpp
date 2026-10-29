#include<iostream>
using namespace std;

// singleLevel Inheritance
class A{
    public:
    int age;
    string Name;
    A(int age ,string Name){
        this -> age = age;
        this -> Name = Name;
    } 
   
    void getInfo(){

    }
};

class B : public A{
    public
    string Location
    B(string Location, int age,string Name):A(age,Name){
       this ->Location  = Location;
    }
};



// multiLevel Inheritance
class A{
    public:

};

class B : public A{

};

class C : public B{

};

// multiple Inheritance;
class A{
  // method and properties:
};

class B : public A{
 // method and properties
};

class C : public A,public B{
  // method and properties:
};



// hierarchial Inheritance
class A{
   // method and properties
};

class B : public A{
   // method and properties
};

class C : public A{
  // method and the properties
};







int main(){
    return 0;
}
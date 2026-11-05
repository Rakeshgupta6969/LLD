#include<bits/stdc++.h>
using namespace std;

class Parent{
    public:
    virtual void getValue() noexcept(false){
        throw logic_error("this is the parent Error");
    }
};

class Child : public Parent{
    public:
    void getValue() noexcept(false){
        throw out_of_range("this is the child Error"); // we cannot throw here any exception like runtime error.
    }
};

class Client{
    private:
    Parent * p;

    public:
    Client( Parent * p){
        this -> p = p;
    }

    void takeValue(){
        try{
            p -> getValue();
        }
        catch(logic_error & e){
            cout<<"logical error exception occured :"<< e.what()<<endl;
        }
    }
};

int main(){
    Parent * p = new Parent();
    Child * c =  new Child();

    Client * cl = new Client(c);
    cl -> takeValue();
    return 0;
}
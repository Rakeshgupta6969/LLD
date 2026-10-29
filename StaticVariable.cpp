#include<iostream>
using namespace std;

void print(){
    static int x  = 0;
    cout<<"x:"<<x<<endl;
    x++;
}


class ABC{  
    public:   
    ABC(){
        cout<<"this is the constructor "<<endl;
    }

    ~ABC(){
        cout<<"this is the destructor "<<endl;
    }
};


int main(){
    // print();
    // print();
    // print();

   static ABC a1;

   cout<<"this is the end of the main function "<<endl;



    
    return 0;
}
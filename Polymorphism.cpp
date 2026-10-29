#include<iostream>
using namespace std;

// class PolyMorphism{
//      public:
//      // this is the function overloading.
//      void print(int x){
//         cout<<"the value of the x : "<<x<<endl;
//      }

//      void print(int a,int b){
//         cout<<"the sum of the numbers "<< a + b << endl;
//      }
// };


  

class Student{
 public:
 int RollNo;
 string Name;

 Student(int RollNo,string Name){
   this -> RollNo = RollNo;
   this -> Name = Name;
 }


  // function overloading.
 void PrintInfo(){
   cout<<"your Name : " << Name << endl;
   cout<<"your RollNo:"<< RollNo<<endl;
 }

 void PrintInfo(int rollNumber){
   RollNo = rollNumber;
   cout<<"your RollNo: "<< RollNo << endl;
 }

};


int main(){
   // PolyMorphism f1;
   // f1.print(4);
   // f1.print(1,2);

    Student S1(160,"Rakesh");
    S1.PrintInfo();
    S1.PrintInfo(161);


    return 0;
}
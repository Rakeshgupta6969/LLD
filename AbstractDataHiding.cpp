#include<iostream>
using namespace std;
class Student{
    private:
    double Salary;
    void HiddenData(){
        cout<<"this is the hidden part and your salary is :"<<Salary<<endl;
    }
    
    public:
    int age;
    string Name;

    // constructor
    Student(double Salary,int age,string Name){
        this -> Salary = Salary;
        this -> age = age;
        this -> Name = Name;
    }

    void printInfo(){
        HiddenData();
        cout<<"your Name is :"<< Name <<endl;
        cout<< "your age is :"<<age<<endl;
    }

};
 
int main(){

    Student S1(200000,21,"Rakesh Gupta");
    S1.printInfo();

 return 0;
}
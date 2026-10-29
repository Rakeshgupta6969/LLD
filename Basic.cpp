#include<iostream>
using namespace std;

class Teacher{
    
    private:
      double salary;

    public:
    string name;
    string dept;
  
   

    //  Teacher(string Name,string Dept,double salary,int age){
    //       this -> name = Name;
    //       this -> dept = Dept;
    //       this -> salary = salary;
    //       this -> age = age;
    //  }


     //setter to access the private value
     void setSalary(double s){
        salary = s;
     }

     // to return the private value outside of the class we use the getter
     double getSalary(){
        return salary;
     }


    void changeDept(string  dept){
        this -> dept = dept;
    }
    void printDetails(){
        cout<<name<<endl;
    }

};

int main(){
     Teacher T1;
     T1.name = "Rakesh Gupta";
     T1.dept = "CSE";

     T1.printDetails();
     T1.setSalary(20000);
     double  sal =   T1.getSalary();
     cout<<"the salary is "<<sal<<endl;

   




     
}
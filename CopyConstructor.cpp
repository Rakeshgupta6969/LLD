#include<iostream>
using namespace std;

 class Employee{
   public:
   double * Salary;
   int age;
   string Name;

   Employee(string Name,int age,double EmpSalary){
      this ->Name = Name;
      this -> age = age;
      Salary = new double;
      *Salary = EmpSalary;
   }

   // now here we just want tot make a shallow copy constructor
//    Employee(Employee &  obj){
//     this -> age = obj.age;
//     this -> Name = obj.Name;
//     this -> Salary = obj.Salary;
//    }

   
   // now the concept of the deep copy  allocation
   Employee(Employee & obj){
    this -> Name = obj.Name;
    this -> age = obj.age;
    Salary = new double; // here assign the new address of the salary.
    *Salary = *(obj.Salary); // and putting the value at that new address.
   }

   void getInfo(){
    cout<<age<<endl;
    cout<<Name<<endl;
    cout<<*Salary<<endl;
   }
   
 };

int main(){

    Employee E1("Rakesh",21,2000000);
    E1.getInfo();

    // now to make the shallow copy constructor;
    Employee E2(E1);
    *E2.Salary = 50000;
    cout<<"the Salary of the employee E1 after the changing in the salary of E2:"<<*E1.Salary<<endl;

    
    return 0;
}
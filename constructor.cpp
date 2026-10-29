#include<iostream>
#include<string>
using namespace std;

  class Teacher{
    private:
    double Salary;
   
    public:
    int age;
    string Name;
    string dept;
     
    // non parameterized constructor
    // Teacher(){ // this is our constructor
    //      this -> age = 40;
    //      this -> Name = "Rohan";
    //      this -> dept = "CSE";
    // }


    // parameterized constructor
    Teacher(string Name,string dept,int age,double Salary){
        this -> Name = Name;
        this -> dept = dept;
        this ->  age = age;
        this  ->  Salary = Salary;
    }

    void getInfo(){
        cout<<" Name : "<<Name<<endl;
        cout<<" age : "<<age<<endl;
        cout<<"Dept:"<<dept<<endl;

    }

  };


  // now the concept of the shallow and the deep copy constructor
  class Student{
      public:
      string name;
      double *cgpaPtr;

    
      Student(string name,double cgpa){
        this -> name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
      }

     // shallow copy constructor
      Student(Student &obj){
        this -> name = obj.name;
       this -> cgpaPtr = (obj.cgpaPtr);
      }

      // now make the deep copy constructor
      // Student(Student &obj){
      //   this -> name = name;
      //   cgpaPtr = new double;
      //   *cgpaPtr = *(obj.cgpaPtr);  // here just we want to give the allocation of the new address for the new object allocation.
      // }

       
      void getInfo(){
        cout<<"Name :"<<name<<endl;
        cout<<"CGPA:"<<*cgpaPtr<<endl;
      }
        
      // destructor
      ~Student(){
        delete cgpaPtr; // it is maindatory to delete the dynamic variable otherwise memory leak ka possibility h.
        cout<<"Hi i am destructor and i deleted everything"<<endl;
      }
  };


    


int main(){

    // Teacher T1("Rakesh","CSE",21,5000000);
    // // T1.getInfo();
    // Teacher T2(T1); // here the copy constructor is called automatically. to copy from object T1 to T2 object
    // T2.getInfo();
   

    Student S1("Rakesh",9.2);
    cout<<"your CGPA : "<< *S1.cgpaPtr<<endl;
   //  now make a shallow  default copy constructor;
     Student S2(S1);
     *S2.cgpaPtr = 8.9;
     cout<<"after the Shallow copy constructor the CGPA of S1:"<<*S1.cgpaPtr<<endl; // change in S1.




    // now make the deep copy constructor.
    // Student S1("Rakesh",9.2);
    //   Student S2(S1);
    //  *S2.cgpaPtr = 8.9;
    //   cout<<"after the deep copy constructor the CGPA of S1:"<<*S1.cgpaPtr<<endl; // no chaange in S1


    // now the concept of the destructor.
    // destructor automatically called for the static allocation
    // but for the dynamic allocation we have to create destructor Manually.

    // Student S1("Rakesh",9.2);
    // S1.getInfo();

     

    return 0;
}





/
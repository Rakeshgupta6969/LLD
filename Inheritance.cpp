#include<iostream>
#include<string>
using namespace std;
// class Person{
//     public:
//     string Name;
//     int age;

//     // Person(string Name,int age){
//     //     this -> Name = Name;
//     //     this -> age = age;
//     // }

//     // destructor
//     ~Person(){
//         cout<<"this is the Parent Destructor"<<endl;
//     }

// };

// class Student : public Person{
//     public:
//     int rolNo;
//     // Student( string Name,int age,int rolNo) : Person(Name,age){
//     //     this -> rolNo = rolNo;
//     // }



//     // void getInfo(){
//     //     cout<<"Name:"<<Name<<endl;
//     //     cout<<"age:"<<age << endl;
//     //     cout<<"Roll Number:"<< rolNo <<endl;
//     // }
    
//     // child destructor
//     ~Student(){
//         cout<<"this is the child constructor "<<endl;
//     }

// };

// class GraduateStudent: public Student{
//     public:
//     string ResearchField;

//     void getInfo(){
//         cout<<Name<<endl;
//         cout<<age<<endl;
//         cout<<rolNo<<endl;
//         cout<<ResearchField<<endl;
    
//     }

// };


class College{
    public:
    string ColName;
    string Location;
    // constructor
    College(string ColName,string Location){
        this -> ColName = ColName;
        this -> Location = Location;
    } 
    
    void getInfo(){
        cout<<"your College Name:"<<ColName<<endl;
        cout<<"your College Location:"<<Location<<endl;
    }
};

class Student : public College{
    public:
    string Name;
    int RollNo;
    // constructor
    Student(int RollNo,string Name,string ColName,string Location):College(ColName,Location){  
        this -> RollNo = RollNo;
        this -> Name = Name;
    }

    void getInfo(){
        cout<<"your Name :"<<Name<<endl;
        cout<<"your RollNo :"<<RollNo<<endl;
        cout<<"your College Name:"<<ColName<<endl;
        cout<<"your College Location:"<<Location<<endl;
    }

};



int main(){

    // Student S1;
    // S1.Name = "Rakesh Gupta";
    // S1.age = 21;
    // S1.rolNo = 160;

    // Student S1("Rakesh",21,160);
    // S1.getInfo();


   // multilevel Inheritance.
    // GraduateStudent S1;
    // S1.Name = "Rakesh Gupta";
    // S1.age = 21;
    // S1.rolNo = 160;
    // S1.ResearchField = "quantum physics";
    // S1.getInfo();


    Student S1(160,"Rakesh Gupta","MAIT","Rohini - Sec-22,Delhi");
    S1.getInfo();
    cout<<S1.ColName<<endl;
    
    College C1("JIT","Begumpur");
    cout<<C1.ColName<<endl;
    return 0;
}
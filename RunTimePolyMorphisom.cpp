#include<iostream>
using namespace std;

class College{
    public:
    string ColName;
    string Location;

    // College(){ // declaration of the default constructor.

    // }

    College(string ColName,string Location){
        this -> ColName = ColName;
        this -> Location = Location;
    }

   virtual void getInfo(){
        cout<<"your College Name :"<<ColName<<endl;
        cout<<"college Location :"<<Location<<endl;
    }
};

class Student : public College{
    public:
    int RollNo;
    string Student_Name;
    Student(int RollNo,string Student_Name,string ColName,string Location):College(ColName,Location){
        this -> RollNo = RollNo;
        this -> Student_Name = Student_Name;
    }

    void getInfo(){
        cout<<"Your Name :"<<Student_Name<<endl;
        cout<<"your RollNumber :"<<RollNo<<endl;
        cout<<"your College Name:"<<ColName<<endl;
        cout<<"college Location :"<<Location<<endl;
    }
};

int main(){

    // Student S1(160,"Rakesh Gupta","MAIT","Rohini sector-22,Delhi");
    // S1.getInfo();

    // this is the right way to excess and implement the runtime polymorphism.
    Student * S1 = new Student(160,"Rakesh Gupta","MAIT","Rohini sector-22,Delhi");
    S1 -> getInfo();

    cout<<endl;
    S1 -> College::getInfo();

    // College * C1 = new College();
    // C1 -> ColName = "Mait";
    // C1-> Location = "Delhi";
    // C1 -> getInfo();
      

    return 0;
}
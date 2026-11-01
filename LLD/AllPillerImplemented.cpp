#include<bits/stdc++.h>
using namespace std;

class Car{
    public:
    virtual void startEngine() = 0;
    virtual void accelerate() = 0;
    virtual void BreakApply() = 0;
    virtual void stopEngine() = 0;
};

class ManualCar{
    public:
    void ManualCarStart(){
        cout<<"Start the manual Car"<<endl;
    }

    void startEngine(){
        cout<<"The engine is started of ManualCar"<<endl;
    }

    void accelerate(){
        cout<<"The speed of the car is increased by 20kmh"<<endl;
    }

    void BreakApply(){
        cout<<"Break applied speed is decreasing"<<endl; 
    }

    void stopEngine(){
        cout<<"the engine is stopped"<<endl;
    }
};


class ElectricCar{
    public:
    void ElectricCarStart(){
        cout<<"Start the ElectricCar"<<endl;
    }

    void startEngine(){
        cout<<"The engine is started of ElectricCar"<<endl;
    }

    void accelerate(){
        cout<<"The speed of the car is increased by 20kmh"<<endl;
    }

    void BreakApply(){
        cout<<"Break applied speed is decreasing"<<endl; 
    }

    void stopEngine(){
        cout<<"the engine is stopped"<<endl;
    }
};


int main(){
    ManualCar *C1 = new ManualCar();
    C1 -> ManualCarStart();
    C1 -> startEngine();
    C1 -> accelerate();
    C1 -> BreakApply();
    C1 -> stopEngine();
    
    cout<<endl;
    
    ElectricCar *C2  = new ElectricCar();
    C2 -> ElectricCarStart();
    C2 -> startEngine();
    C2 -> accelerate();
    C2 -> BreakApply();
    C2 -> stopEngine();

    return 0;
}


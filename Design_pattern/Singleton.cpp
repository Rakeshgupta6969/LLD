#include<iostream>
#include <mutex>
#include<thread>
using namespace std;

class Singleton{
    private:
    int x;
    char ch;
    static Singleton * instance;
    static mutex mtx; // to handle the multiple thread
    Singleton(){
        cout<<"the singleton constructor is called and the new object is created "<<endl;
    }
    
    public:
   static Singleton * getInstance(){
        if(instance == NULL){
            lock_guard<mutex> lock(mtx); // lock  for the thread safety.
            if(instance == NULL){
                instance = new Singleton();
            }
        }
        return instance;
    }
};

Singleton * Singleton :: instance = NULL;
 mutex  Singleton :: mtx;


int main(){
    Singleton * S1 = Singleton :: getInstance();
    Singleton * S2 = Singleton :: getInstance();
    cout<<(S1 == S2) <<endl;

    
}
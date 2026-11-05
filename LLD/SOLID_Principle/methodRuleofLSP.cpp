/*
Method rule follow the two condition
// child class must not be strengthen the precondition of parent class
// child class must not be weaken the postcondition of the parent class.
*/

#include<bits/stdc++.h>
using namespace std; 

class BankAccount{
    protected:
    double Balance;

    public:
    BankAccount(double amount){
        Balance  = amount;
    }

    virtual void Withdraw(double amount){
        if(Balance <= 0){ // precondition defined be the parent class.
            cout<<"Balance is not available you can't withdraw anymore amount"<<endl;
            return;
        }
        if(Balance - amount < 0){
            cout<<"Balance is Insufficient"<<endl;
        }
        Balance -= amount;
        cout<<"your Amount is withdraw successfully and your currAmount is " << (Balance - amount)<<endl;
    }
};


class ChildBankAccount : public BankAccount{
    public:
    ChildBankAccount(double amount) : BankAccount(amount){}
    void Withdraw(double amount){
        if(Balance <=1000){ // now here child class try to strengthen the precondition of parent class and break the method rule
            cout<<"you are unable to withdraw the amount because the base amount need to 1000 and your current amount is:" << Balance<<endl;
            return;
        }
        if(Balance - amount < 0){
         cout<<"Insufficient amount"<<endl;
         return;
        }
        Balance -= amount;
        cout<<"your Amount is withdraw successfully and your currAmount is " << (Balance - amount)<<endl;
    }
};


int main(){
    ChildBankAccount * child = new ChildBankAccount(100);
    child -> Withdraw(20);
    return 0;
}


// similarly for the postCondition
class BankAccount{
    public:
    virtual int withdraw(double balance, double amount){
        return balance - amount; // this is the postcondition defined by the parent class.
    }
};

class ChildBankAccount : public BankAccount{
    public:
    int withdraw(double balance, double amount){
        return balance; // this break the post condition of the parent class.
    }
}


#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    protected:
    double Balance; // Balance can't be negative.
    
    public:
    BankAccount(double amount){
        Balance = amount;
    }
    
    virtual void Withdraw(double amount){
        if(Balance - amount < 0){
            cout<<"Insufficient Amount"<<endl;
            return;
        }
        Balance -= amount;
       cout<<"amount withdraw successfully"<<endl;
    }

    double getBalance(){
        return Balance;
    }
};

class PremiumBankAccount : public BankAccount{
    public:
    PremiumBankAccount(double amount) : BankAccount(amount){}
    void Withdraw(double amount){
        Balance -= amount;  // here breaking the property rule of LSP because here Balance can be negative
    }
};


int main(){
 
    PremiumBankAccount * childAccount = new PremiumBankAccount(40000);
    childAccount -> Withdraw(50000);
    
    double AvlBalance = childAccount -> getBalance();
    cout<<AvlBalance<<endl;
}
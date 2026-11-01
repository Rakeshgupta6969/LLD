#include<bits/stdc++.h>
using namespace std;

class Account{
   public:
   virtual void Deposit(double amount) = 0;
   virtual void Withdraw(double amount) = 0;
};

class currAccount : public Account{
    private:
    double balance;

    public:
    currAccount(){
        balance = 0;
    }

    void Deposit(double amount){
        balance += amount;
        cout<<"Amount deposit successfully"<<endl;
    }

    void Withdraw(double amount){
        if(balance >= amount){
            balance = balance - amount;
            cout<<"the balance is withdraw"<<endl;
            cout<<"your current Balance is :" << balance << endl;
        }
        else{
            cout<<"Insufficient amount"<<"your current balance is"<<balance << endl;
        }
    }

};


class savingAccount : public Account{
    private:
    double balance;

    public:
    savingAccount(){
        balance = 0;
    }

    void Deposit(double amount){
        balance += amount;
        cout<<"amount deposit successfully"<<endl;
    }

    void Withdraw(double amount){
        if(balance >= amount){
            balance = balance - amount;
            cout<<"the balance is withdraw"<<endl;
            cout<<"your current Balance is :" << balance << endl;
        }
        else{
            cout<<"Insufficient amount"<<"your current balance is"<<balance << endl;
        }
    }

};


class fixedDepositAccount : public Account{
    private:
    double balance;

    public:
    fixedDepositAccount(){
        balance = 0;
    }

    void Deposit(double amount){
        balance += amount;
        cout<<"amount deposit successfully"<<endl;
    }

    void Withdraw(double amount){
        throw logic_error("withdrawal not allowed in the fixed term account");
    }
};

class BankClient{
    private:
    vector<Account*>accounts;

    public: 
    BankClient(vector<Account*>acc){
        this -> accounts = acc;
    }

    void processTransaction(){
        for(auto & acc : accounts){
          acc->Deposit(1000);

          try{
            acc -> Withdraw(1);
          }
          catch(logic_error & e){ // at the time of fixedDepositAccount it will return error and break the LSP
            cout<<"exception:"<< e.what()<<endl;
          }
        }
    }
};


int main(){
    vector<Account*>accounts;
    accounts.push_back(new currAccount()); // Account * a = new Account() = new Childclass(), because the child class inherits the base class
    accounts.push_back(new savingAccount());
    accounts.push_back(new fixedDepositAccount());
    
    BankClient * C = new BankClient(accounts);
    C -> processTransaction();

    return 0;
}
#include<bits/stdc++.h>
using namespace std;


class Non_WithdrawableAccount{
   public:
   virtual void Deposit(double amount) = 0;
};

class WithdrawableAccount : public Non_WithdrawableAccount{
    public:
    virtual void Withdraw(double amount) = 0;
};


class currAccount : public WithdrawableAccount{
    private:
    double balance;

    public:
    currAccount(){
        balance = 0;
    }

    void Deposit(double amount){
        balance += amount;
        cout<<"your amount is deposit successfully and current Balance is "<< balance<<endl;
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


class savingAccount : public WithdrawableAccount{
    private:
    double balance;

    public:
    savingAccount(){
        balance = 0;
    }

    void Deposit(double amount){
        balance += amount;
        cout<<"your amount is deposit successfully and current Balance is "<< balance<<endl;
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


class fixedDepositAccount: public Non_WithdrawableAccount{
  private:
  double balance;
  
  public:
  fixedDepositAccount(){
    balance = 0;
  }

  void Deposit(double amount){
    balance = balance + amount;
    cout<<"your amount is deposit successfully and current Balance is "<< balance<<endl;
  }

};

class BankClient{
    private:
    vector<WithdrawableAccount*>WithAccounts;
    vector<Non_WithdrawableAccount*>NonWithAccounts;
    
    public:
    BankClient(vector<WithdrawableAccount*>withAcc, vector<Non_WithdrawableAccount*>NonwithAcc){
        WithAccounts = withAcc;
        NonWithAccounts = NonwithAcc;
    }

    void makeTransaction(){
        for(auto & acc : WithAccounts){
            acc -> Deposit(10000);
            acc -> Withdraw(2000);
        }

        for(auto & acc : NonWithAccounts){
            acc -> Deposit(10000);
        }
    }
};


int main(){
    vector<WithdrawableAccount*>WithAccounts;
    vector<Non_WithdrawableAccount*>NonWithAccounts;
    
    WithAccounts.push_back(new currAccount());
    WithAccounts.push_back(new savingAccount());

    NonWithAccounts.push_back(new fixedDepositAccount());

    BankClient * C1 = new BankClient(WithAccounts,NonWithAccounts);
    C1 -> makeTransaction();

    return 0;
}

#include<iostream> 

using namespace std; 
//task fill in the missing blank 


// creating a class bankAccount 
//requires a modifier
//balance ( double ) 
//accountHolder(String)
class bankAccount { 
protected: 
double balance;
string accountHolder; 

public : 
// constructor
bankAccount(string accountHolder, double balance) {
    this->accountHolder = accountHolder;
    this->balance = balance;
}
//getter for balance
double getBalance() { 
    return balance;
}

//deposit method 
void deposit(double amount) { 
    balance += amount;
}
};

int main () { 
bankAccount acc("jhon", 1000);
acc.deposit(500);
cout<< "Balance: " << acc.getBalance() << endl;
    return 0;
}
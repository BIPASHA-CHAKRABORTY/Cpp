#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string depositorName;
    string accountNumber;
    string accountType;
    double balance;

public:
   BankAccount(string name, string accNumber, string accType, double initialBalance)
   {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }
   
    void deposit(double amount) 
     {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited " << amount << ". New balance:" << balance;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
     }

    void withdraw(double amount) {
        if (amount > 0) {
            if (balance >= amount) {
                balance -= amount;
                cout << "Withdrew " << amount << " New balance: " ;
            } else {
                cout << "Insufficient balance." << endl;
            }
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

    
    void displayInfo() const 
   {
        cout << "Depositor Name: " << depositorName << endl;
        cout << "Balance: $" << balance << endl;
    }
};


int main() {
    
    BankAccount account("John Doe", "123456789", "Savings", 1000.0);

    
    account.displayInfo();

    
    account.deposit(500.0);

    account.withdraw(300.0);

   
    account.withdraw(1500.0);

    
    account.displayInfo();

    return 0;
}

#include <iostream.h>
#include <conio.h>

class BankAccount {
private:
    float balance;   

public:
    // Constructor to initialize balance
    BankAccount(float initialBalance) {
        if(initialBalance < 0) {
            balance = 0;
            cout << "Initial balance invalid. Setting balance to 0.\n";
        } else {
            balance = initialBalance;
        }
    }

    // Function to deposit amount
    void deposit(float amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Amount deposited: " << amount << "\n";
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }

    // Function to withdraw amount
    void withdraw(float amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << "\n";
        } else {
            cout << "Insufficient balance or invalid amount!\n";
        }
    }

    // Function to display balance
    void displayBalance() {
        cout << "Current balance: " << balance << "\n";
    }
};

void main() {
    clrscr();   

    BankAccount account(1000);  // create account with initial balance 1000

    account.displayBalance();

    account.deposit(500);       // deposit 500
    account.displayBalance();

    account.withdraw(300);      // withdraw 300
    account.displayBalance();

    account.withdraw(1500);     // attempt to withdraw more than balance

    getch();   
    
}
#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string name, double initialBalance)
    {
        accountNumber = accNo;
        accountHolder = name;
        balance = initialBalance;
    }

    // Deposit function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Withdrawal function
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid withdrawal amount." << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient balance." << endl;
        }
        else
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
    }

    // Display account details
    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account(101, "Aryan", 5000);

    account.display();

    cout << "\nDepositing 2000..." << endl;
    account.deposit(2000);

    account.display();

    cout << "\nWithdrawing 1500..." << endl;
    account.withdraw(1500);

    account.display();

    return 0;
}
#include <iostream>
using namespace std;

// Base class
class Account
{
protected:
    string owner;
    double balance;

public:
    Account(string name, double bal)
    {
        owner = name;
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    virtual void display()
    {
        cout << "Owner: " << owner << ", Balance: $" << balance << endl;
    }
};

// Derived class
class SavingsAccount : public Account
{
private:
    double interestRate;

public:
    SavingsAccount(string name, double bal, double rate)
        : Account(name, bal), interestRate(rate) {}

    void addInterest()
    {
        balance += balance * interestRate / 100;
    }

    void display() override
    {
        cout << "Savings Account -> Owner: " << owner
             << ", Balance: $" << balance
             << ", Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    // Creating an object of Account
    Account acc("John Doe", 1000.0);
    acc.deposit(500.0);
    acc.withdraw(300.0);
    acc.display();

    cout << endl;

    // Creating an object of SavingsAccount
    SavingsAccount savAcc("Jane Smith", 2000.0, 5.0);
    savAcc.deposit(1000.0);
    savAcc.addInterest();
    savAcc.display();

    return 0;
}

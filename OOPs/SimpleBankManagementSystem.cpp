#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolder;
    int accountNumber;
    float balance;

public:
    BankAccount(string name, int accNo, float initialBalance)
    {
        accountHolder = name;
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(float amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Rs. " << amount << " deposited successfully.\n";
        }
        else
        {
            cout << "Invalid amount!\n";
        }
    }

    void withdraw(float amount)
    {
        if (amount <= balance && amount > 0)
        {
            balance -= amount;
            cout << "Rs. " << amount << " withdrawn successfully.\n";
        }
        else
        {
            cout << "Insufficient balance or invalid amount! \n";
        }
    }

    void display()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: ₹" << balance << endl;
    }
};

int main()
{
    string name;
    int accNo;
    float initBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter initial deposit amount: ₹";
    cin >> initBalance;

    BankAccount user(name, accNo, initBalance);

    int choice;
    float amount;

    do
    {
        cout << "\n--- MENU ---\n";
        cout << "1. Deposit\n2. Withdraw\n3. Display Details\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ₹";
            cin >> amount;
            user.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw: ₹";
            cin >> amount;
            user.withdraw(amount);
            break;
        case 3:
            user.display();
            break;
        case 4:
            cout << "Thank you for banking with us!\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

bool checkPrime(int num)
{
    if (num < 2)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    int choice;
    do
    {
        cout << "1.Check if number is prime\n2.Exit\n";
        cout << "Enter your Choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the number : ";
            cin >> num;
            if (checkPrime(num))
            {
                cout << num << " is a Prime Number.\n\n";
            }
            else
            {
                cout << num << " is not a prime number.\n\n";
            }
        }
        break;
        case 2:
            cout << "Exiting...";
            break;
        default:
            cout << "Invalid choice!";
            break;
        }

    } while (choice != 2);

    return 0;
}
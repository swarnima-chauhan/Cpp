#include <iostream>
using namespace std;

int areaRect(int length, int width)
{
    return length * width;
}

int avg3(int a, int b, int c)
{
    return (a + b + c) / 3;
}

int largest3(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if (b > c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

bool isEven(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void multipleof3()
{
    for (int i = 10; i <= 50; i++)
    {
        if (i % 3 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int choice;
    do
    {
        cout << "\n--- Assignment 1 ---\n";
        cout << "1.Find Area of Rectangle\n2.Find Average of 3 Numbers\n3.Find largest of 3 numbers\n4.Find if a number is Even or Not\n5.Find multiples of 3 from 10 to 50\n6.Exit\n";
        cout << "Enter your Choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int length, width;
            cout << "Enter length : ";
            cin >> length;
            cout << "Enter width : ";
            cin >> width;
            cout << "Area of Rectangle is : " << areaRect(length, width) << endl;
            break;
        }

        case 2:
        {
            int a, b, c;
            cout << "Enter the numbers : ";
            cin >> a >> b >> c;
            cout << "Average of Three Numbers : " << avg3(a, b, c) << endl;
            break;
        }

        case 3:
        {
            int a, b, c;
            cout << "Enter the numbers : ";
            cin >> a >> b >> c;
            cout << "Largest of Three Numbers : " << largest3(a, b, c) << endl;
            break;
        }

        case 4:
        {
            int num;
            cout << "Enter the number : ";
            cin >> num;
            if (isEven(num))
            {
                cout << num << " is even.\n";
            }
            else
            {
                cout << num << " is not even.\n";
            }
            break;
        }

        case 5:
        {
            multipleof3();
            break;
        }

        case 6:
        {
            cout << "Exiting...\n";
            break;
        }

        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
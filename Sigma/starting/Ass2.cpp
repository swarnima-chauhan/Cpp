#include <iostream>
using namespace std;

int areaSq(int side)
{
    return side * side;
}

int total(int item1, int item2, int item3)
{
    int sum = item1 + item2 + item3;
    int answer = sum + (18 * (sum / 100));
    return answer;
}

float areaCircle(int radius)
{
    return 3.14 * radius * radius;
}

int main()
{
    int choice;
    do
    {
        cout << "\n--- Assignment 2 ---\n";
        cout << "1.Find Area of Square\n2.Find Total cost of three items+GST\n3.Find Area of Circle\n4.Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int side;
            cout << "Enter the Side of square :";
            cin >> side;
            cout << "Area of Square is : " << areaSq(side) << endl;
            break;
        }
        case 2:
        {
            int a, b, c;
            cout << "Enter the price of the three items :";
            cin >> a >> b >> c;
            cout << "Total price + 18% GST :" << total(a, b, c) << endl;
            break;
        }
        case 3:
        {
            int radius;
            cout << "Enter radius of circle :";
            cin >> radius;
            cout << "Area of Circle is : " << areaCircle(radius) << endl;
            break;
        }
        case 4:
        {
            cout << "Exiting...";
            break;
        }
        default:
        {
            cout << "Invalid choice\n";
            break;
        }
        }
    } while (choice != 4);
    return 0;
}
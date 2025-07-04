#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int rollNo;
    float marks;

public:
    Student()
    {
        name = "";
        rollNo = 0;
        marks = 0;
    }

    void input()
    {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "Name : " << name << "  Roll Number : " << rollNo << "  Marks : " << marks << endl;
    }

    int getRollNo()
    {
        return rollNo;
    }
};

int main()
{
    Student students[10];
    int count = 0;
    int choice;

    do
    {
        cout << "\n--- Student Record Menu ---\n";
        cout << "1. Add Student\n2. Display All Students\n3. Search by Roll Number\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            students[count].input();
            count++;
            break;
        case 2:
            for (int i = 0; i < count; i++)
            {
                students[i].display();
            }
            break;
        case 3:
        {
            int roll;
            cout << "Enter Roll Number to search: ";
            cin >> roll;
            bool found = false;
            for (int i = 0; i < count; i++)
            {
                if (students[i].getRollNo() == roll)
                {
                    students[i].display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Student not found!\n";
            }
            break;
        }
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 4);

    return 0;
}
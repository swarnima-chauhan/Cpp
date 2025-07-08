#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Person
{
protected:
    string name;
    int age;

public:
    Person() : name(""), age(0) {}
    Person(string name, int age) : name(name), age(age) {}

    virtual void input()
    {
        cout << "Enter name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
    }

    virtual void display()
    {
        cout << "Name: " << name << " | Age : " << age;
    }
};

class Student : public Person
{
private:
    int roll;
    float marks;

public:
    Student() : roll(0), marks(0.0) {}
    Student(string name, int age, int roll, float marks) : Person(name, age), roll(roll), marks(marks) {}

    void input() override
    {
        Person::input();
        cout << "Enter roll number : ";
        cin >> roll;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() override
    {
        Person::display();
        cout << " | Roll : " << roll << " | Marks : " << marks << endl;
    }

    int getRoll()
    {
        return roll;
    }

    float getMarks()
    {
        return marks;
    }
};

int main()
{
    vector<Student> students;
    int choice;

    do
    {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n2. Display All Students\n3. Search by Roll\n4. Show Topper\n5. Exit\n";
        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            Student s;
            s.input();
            students.push_back(s);
            break;
        }
        case 2:
            if (students.empty())
            {
                cout << "No students added yet.\n";
            }
            else
            {
                for (Student s : students)
                {
                    s.display();
                }
            }
            break;
        case 3:
        {
            int r;
            cout << "Enter roll number to search: ";
            cin >> r;
            bool found = false;
            for (Student s : students)
            {
                if (s.getRoll() == r)
                {
                    s.display();
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Student not found.\n";
            }
        }
        break;
        case 4:
            if (students.empty())
            {
                cout << "No students available.\n";
            }
            else
            {
                Student topper = students[0];
                for (Student s : students)
                {
                    if (s.getMarks() > topper.getMarks())
                        topper = s;
                }
                cout << "\nTopper:\n";
                topper.display();
            }
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
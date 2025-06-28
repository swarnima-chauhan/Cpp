#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int rollno;
};

class Teacher
{
public:
    string subject;
    double salary;
};

class TA : public Student, public Teacher
{
};

int main()
{
    TA s1;
    s1.name = "Swarn";
    s1.rollno = 101;
    s1.subject = "C++";
    s1.salary = 50000;

    cout << "Name: " << s1.name << endl;
    cout << "Roll No: " << s1.rollno << endl;
    cout << "Subject: " << s1.subject << endl;
    cout << "Salary: " << s1.salary << endl;
    return 0;
}
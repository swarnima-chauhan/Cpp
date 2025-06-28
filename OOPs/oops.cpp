#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollno;
};

class Teacher : public Person
{
public:
    string subject;
    double salary;
};

int main()
{
    Student s1;
    s1.name = "John Doe";
    s1.age = 20;
    s1.rollno = 101;
    cout << "Student Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Roll No: " << s1.rollno << endl;

    Teacher t1;
    t1.name = "Jane Smith";
    t1.age = 35;
    t1.subject = "Mathematics";
    t1.salary = 50000.0;
    cout << "Teacher Name: " << t1.name << endl;
    cout << "Age: " << t1.age << endl;
    cout << "Subject: " << t1.subject << endl;
    cout << "Salary: " << t1.salary << endl;

    return 0;
}
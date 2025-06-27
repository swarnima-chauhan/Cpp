#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }

    Person()
    {
        cout << "Constructor of Person class called" << endl;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roolno: " << rollno << endl;
    }
};

int main()
{
    Student s1("Swarn", 20, 101);

    s1.getInfo();
    return 0;
}
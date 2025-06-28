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

    void getInfo()
    {
        cout << "name: " << name << endl;
        cout << "age: " << age << endl;
        cout << "roolno: " << rollno << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "Swarn";
    s1.age = 20;
    s1.rollno = 101;

    s1.getInfo();
    return 0;
}
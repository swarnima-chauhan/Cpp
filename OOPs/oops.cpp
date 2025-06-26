#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double cgpa;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &s)
    {
        this->name = s.name;
        this->cgpa = s.cgpa;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    s2.getInfo();

    return 0;
}
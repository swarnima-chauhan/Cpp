#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &s)
    {
        this->name = s.name;
        // deep copy
        cgpaPtr = new double;  // Allocate new memory for cgpaPtr
        *cgpaPtr = *s.cgpaPtr; // Copy the value from the source object

        // Shallow copy
        // this->cgpaPtr = s.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Rahul Kumar", 8.9);
    Student s2(s1);
    s1.getInfo();
    *(s2.cgpaPtr) = 9.0;
    s1.getInfo();
    s2.name = "Rohit Kumar";
    s2.getInfo();

    return 0;
}
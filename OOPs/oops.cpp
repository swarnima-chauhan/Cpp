#include <iostream>
#include <string>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // non-parameterized constructor
    Teacher()
    {
        cout << "Hi i am constructor\n";
    }
    // parameterized constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // properties
    string name;
    string dept;
    string subject;

    // methods/member functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    //  function to set the value of private member variable salary
    void setSalary(double s)
    {
        salary = s;
    }

    // getter function
    // to access private member variable salary
    double getSalary()
    {
        return salary;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{

    Teacher t1("Swarnima", "Computer Science", "C++", 50000); // parameterized constructor called here
    // t1.getInfo();
    cout << "Teacher 2 Info:\n";
    Teacher t2(t1); // default copy constructor called here
    t2.getInfo();

    return 0;
}
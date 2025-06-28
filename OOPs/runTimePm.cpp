#include <iostream>
#include <string>
using namespace std;

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent class information" << endl;
    }

    virtual void hello()
    {
        cout << "hello from parent" << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class information" << endl;
    }

    void hello()
    {
        cout << "hello from child" << endl;
    }
};

int main()
{
    Parent parentObj;
    parentObj.getInfo(); // Calls the Parent class method
    parentObj.hello();

    Child childObj;
    childObj.getInfo(); // Calls the Child class method
    childObj.hello();

    return 0;
}
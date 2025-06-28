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
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child class information" << endl;
    }
};

int main()
{
    Parent parentObj;
    parentObj.getInfo(); // Calls the Parent class method

    Child childObj;
    childObj.getInfo(); // Calls the Child class method

    return 0;
}
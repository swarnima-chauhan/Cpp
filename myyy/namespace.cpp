#include <iostream>
using namespace std;

namespace myNamespace
{
    int x = 10;
    void display()
    {
        cout << "Value of x is: " << x << endl;
    }
}

int main()
{
    myNamespace::display();
    cout << myNamespace::x << endl;
    return 0;
}
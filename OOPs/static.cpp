#include <iostream>
#include <string>
using namespace std;

class A
{
public:
    static int x;

    void incx()
    {
        x++;
    }
};

int A::x = 100;

int main()
{
    A obj1, obj2;
    cout << obj1.x << endl;
    obj1.x = 200;
    cout << obj2.x << endl;
    cout << obj1.x << endl;

    return 0;
}
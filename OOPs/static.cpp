#include <iostream>
#include <string>
using namespace std;

void fun()
{
    static int x = 0; // init statement - 1 run
    cout << x << endl;
    x++;
}

int main()
{
    fun();
    fun();
    fun();
    return 0;
}
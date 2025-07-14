#include <iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr = &a;
    cout << *ptr << "\n";

    char ch = 'A';
    char &cho = ch;
    cout << &cho << "\n";

    cho += a;
    cout << cho << "\n";
    *ptr += ch;
    cout << *ptr << "\n";
    cout << a << " " << ch << "\n";

    return 0;
}
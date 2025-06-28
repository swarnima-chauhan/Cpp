#include <iostream>
#include <string>
using namespace std;

class Print
{
public:
    void show(int i)
    {
        cout << "Integer: " << i << endl;
    }

    void show(char ch)
    {
        cout << "Character: " << ch << endl;
    }
};

int main()
{
    Print p1;
    p1.show(5);   // Calls the show(int) function
    p1.show('A'); // Calls the show(char) function

    return 0;
}
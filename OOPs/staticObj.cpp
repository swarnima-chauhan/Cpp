#include <iostream>
#include <string>
using namespace std;

class ABC
{
public:
    ABC()
    {
        cout << "Constructor\n";
    }
    ~ABC()
    {
        cout << "Destuctor\n";
    }
};

int main()
{
    if (true)
    {
        static ABC obj;
    }
    cout << "end of main fn\n";
    return 0;
}
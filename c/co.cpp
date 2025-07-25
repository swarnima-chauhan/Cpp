#include<iostream>
using namespace std;
class Rectangle{
    private:
    int len,br;
    public:
    void getdata()
    {
        cout<<endl<<"Enter length and breadth";
        cin>>len>>br;
    }
    void setdata(int l, int b) 
    {
        len=l;
        br=b;
    }
    void displaydata()
    {
        cout<<endl<<"length = "<<len;
        cout<<endl<<"breadth = "<<br;
    }
    void areaPeri()
    {
        int a,p;
        a=len*br;
        p=2*(len+br);
        cout<<endl<<"Area = "<<a;
        cout<<endl<<"Perimeter = "<<p;
    }
};
int main()
{
    Rectangle r1,r2,r3;
    
    r1.setdata(10,20);
    r1.displaydata();
    r1.areaPeri();

    r2.setdata(5,8);
    r2.displaydata();
    r2.areaPeri();
    
    r3.getdata();
    r3.displaydata();
    r3.areaPeri();

    return 0;
}

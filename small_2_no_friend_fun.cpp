#include <iostream>
using namespace std;
class B;
class A
{
private:
    int x;

public:
    void setdata_A()
    {
        cout << "\n enter the value of x =";
        cin >> x;
    }
    friend void small(A, B);
};
class B
{
private:
    int y;

public:
    void setdata_B()
    {
        cout << "\b enter the value of 2nd no=";
        cin >> y;
    }
    friend void small(A, B);
};
void small(A a, B b)
{
    if (a.x<b.y)
    {
        cout<<"\n no 1st is small ="<<a.x;
    }
    else
    {
         cout<<"\n no 2nd is small ="<<b.y;
    }
}
int main()
{
    A a;
    B b;
    a.setdata_A();
    b.setdata_B();
    small(a, b);
     return 0;
}

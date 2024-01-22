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

        cout << "\b enter the value of 1st no=";
        cin >> x;
    }
    friend void greatest(A, B);
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
    friend void greatest(A, B);
};
void greatest(A a, B b)
{
    if (a.x < b.y)
    {
        cout << "\n no 2nd is greatest =" << b.y;
    }
    else
    {
        cout << "\n no 1st no is greatest =" << a.x;
    }
}
int main()
{
    A a;
    B b;
    a.setdata_A();
    b.setdata_B();
    greatest(a, b);
    return 0;
}

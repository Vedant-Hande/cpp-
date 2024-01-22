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
    friend void swap(A, B);
};
class B
{
private:
    int y;

public:
    void setdata_B()
    {
        cout << "\b enter the value of y =";
        cin >> y;
    }
    friend void swap(A, B);
};
void swap(A a, B b)
{
    int temp;
    cout << "\n before swap =";
    cout << "\n x=" << a.x;
    cout << "\n y =" << b.y;
    temp = a.x;
    a.x = b.y;
    b.y = temp;
    cout << "\n after the swap =";
    cout << "\n x =" << a.x;
    cout << "\n y =" << b.y;
}
int main()
{
    A a;
    B b;
    a.setdata_A();
    b.setdata_B();
    swap(a, b);
     return 0;
}

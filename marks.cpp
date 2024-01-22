#include <iostream>
using namespace std;
class B;
class A
{
private:
    int m1;

public:
    void setdata_A()
    {
        cout << "\b enter the m1 marks =";
        cin >> m1;
    }
    friend void avg(A, B);
};
class B
{
private:
    int m2;

public:
    void setdata_B()
    {
        cout << "\b enter the m2 marks =";
        cin >> m2;
    }
    friend void avg(A, B);
};
void avg(A a, B b)
{
   cout<<"\n avarege of the m1 and m2 is ="<<(a.m1+b.m2)/2;
}
int main()
{
    A a;
    B b;
    a.setdata_A();
    b.setdata_B();
    avg(a, b);
    return 0;
}

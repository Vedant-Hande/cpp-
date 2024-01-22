#include <iostream>
#include <string>
using namespace std;
class number
{
private:
    int a, b;

public:
    number(int x, int y)
    {
        a = x;
        b = y;
    }
    void operator-()
    {
        a = -a;
        b = -b;
    }
    void show()
    {

        cout << "\n value of a= " << a;
        cout << "\n value of b =" << b;
    }
};
int main()
{
    number n1(5, 6), n2(10, 20);
    cout << "\n befor concadination -";
    n1.show();
    -n1;
    cout << "\n after concadination -";
    n1.show();
    cout << endl;
    cout << "\n befor concadination -";
    n2.show();
    -n2;
    cout << "\n after concadination -";
    n2.show();
    return 0;
}

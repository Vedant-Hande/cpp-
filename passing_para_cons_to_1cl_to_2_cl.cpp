#include <iostream>
using namespace std;
class Base
{
private:
    int x;

public:
    Base(int a)
    {
        x = a;
        cout << "\n construtor in Base x =" << x;
    }
};
class derived:public Base
{
private:
    int y;

public:
    derived(int a, int b) : Base( a)         // syntax = derived (arglist 1 ,arglist 2):base(arglist 1)
    {
        y = b;
        cout << "\n construtor in derived y =" << y;
    }
};
int main(int argc, char const *argv[])
{
    derived ob(2, 3);
    return 0;
}

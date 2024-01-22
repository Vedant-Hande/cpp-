#include <iostream>
using namespace std;
int swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\n after swapping tow int nos =\n a =" << a << "\n b =" << b;
}
int swap(float a, float b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "\n after swapping  two float nos =\n a =" << a << "\n b =" << b;
}
int main(int argc, char const *argv[])
{
    swap(10, 20);
    swap(10.10f, 20.20f);
    return 0;
}

#include<iostream>
using namespace std;
class item
{
private:
int id;
    /* data */
public:
    item()
    {
        id=10;
    }
    item(int a)
    {
        id=a;
    }
    item(item & b)
    {
        id=b.id;
    }
    void show()
    {
        cout<<"\n id is ="<<id;
    }
};
int main(int argc, char const *argv[])
{
    item  i1;
    item i2(20);
    item  i3(i1);
    i1.show();
    i2.show();
    i3.show();

    return 0;
}

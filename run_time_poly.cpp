#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "\n base display";
    }
    virtual void show()
    {
        cout << "\n base show";
    }
};
class derived : public base
{
public:
    void display()
    {
        cout << "\n derived display";
    }
    void show()
    {
        cout << "\n derived show";
    }
};
int main(int argc, char const *argv[])
{
    base b, *p;
    derived d;
    cout << "\n p point to base - ";
    p=&b;
    p->display();
    p->show();
    cout << "\n p point to derived -";
    p=&d;
    p->display();
    p->show();

    return 0;
}

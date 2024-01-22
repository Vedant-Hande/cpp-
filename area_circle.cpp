#include <iostream>
using namespace std;
class circle
{
private:
    int radius;

public:
    void putdata()
    {
        cout << "\n enter the radius =";
        cin >> radius;
    }
    void getdata()
    {
        // formula= radius=3.14*radius*radius;
        cout << "\n area of circle =" << 3.14 * radius * radius;
    }
};
int main(int argc, char const *argv[])
{
    circle c;
    circle *p;
    p = &c;
    p->putdata();
    p->getdata();

    return 0;
}

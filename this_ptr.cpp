#include <iostream>
using namespace std;
class item
{
private:
    int a;

public:
    void setdata()
    {
        cout << "enter the number =" << endl;
        cin >> this->a;
    }
    void getdata()
    {
        cout << "\n number =" << this->a;
        cout << "\n address =" << this;
    }
};
int main()
{
    item i;
    i.setdata();
    i.getdata();
    return 0;
}

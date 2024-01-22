#include <iostream>
using namespace std;
class item
{
private:
    static int count;
    int A;

public:
    void setdata()
    {
        cout << "\n enter the number =";
        cin >> A;
        count++;
    }
    void getdata()
    {
        cout << "\n count =" << count;
    }
};
int item::count;
int main(int argc, char const *argv[])
{
    item i;
    i.setdata();
    i.getdata();
    i.setdata();
    i.getdata();
    i.setdata();
    i.getdata();

    return 0;
}

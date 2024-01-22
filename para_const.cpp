#include <iostream>
using namespace std;
class time
{
private:
    int hrs, min, sec;

public:
    void setdata()
    {
        cout << "\n Time =" << hrs << "::" << min << "::" << sec;
    }
    // time(int h, int m, int s);
    // time();
    time(int h, int m, int s)
    {
        hrs = h;
        min = m;
        sec = s;
    }
};
int main()
{
    time t(5, 10, 15);
    t.setdata();
    return 0;
}
#include <iostream>
using namespace std;
class item
{
private:
    int id;
    /* data */
public:
    item()
    {
        id = 10;
    }
    item(item &b)
    {
        id = b.id;
    }
    void show()
    {
        cout << "\n id is =" << id;
    }
};
int main(int argc, char const *argv[])
{
    item i1;
    item i2(i1);
    i1.show();
    i2.show();
    return 0;
}

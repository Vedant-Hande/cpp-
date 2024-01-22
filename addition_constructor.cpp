#include<iostream>
using namespace std;
class addition
{
    private:
        int x,y;
    public:
        void show()
        {
            cout<<"\n addition ="<<x+y;
        }
        addition(int a, int b)
        {
            x=a;
            y=b;
        }
};
int main(int argc, char const *argv[])
{
    addition ob(2,3);
    ob.show();
    return 0;
}

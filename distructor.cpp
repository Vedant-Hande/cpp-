#include<iostream>
using namespace std;
int count=0;
class item{
  
    public:
        item()
        {
            count++;
            cout<<"\n count is created = "<<count;
        }
        ~item()
        {
            count--;
            cout<<"\n count distory = "<<count;
        }
};
int main(int argc, char const *argv[])
{
    item i1,i2;
    return 0;
}

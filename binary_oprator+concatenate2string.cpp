#include<iostream>
#include<string>
using namespace std;
class number
{
private:
    char str1[25];
    /* data */
public:
    void getdata()
    {
        cout<<"\n enter the string =";
        cin>>str1;
    }
    void operator+(number n)
    {
        cout<<(str1,n.str1);
    }
    };
int main(int argc, char const *argv[])
{
    number n1,n2;
    n1.getdata();
    n2.getdata();
    n1+n2;
    return 0;
}


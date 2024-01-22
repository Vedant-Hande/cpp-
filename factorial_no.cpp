#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int n,fact=1,i;
    cout<<"\n enter the number =";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    cout<<"\n factorial of "<<n<<"  is ="<<fact;
    return 0;
}

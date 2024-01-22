#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{ 
    int num,i;
    cout<<"\n enter the number =";
    cin>>num;
    for ( i = 1; i <= 10; i++)
    {
        cout<<"\n"<<num<<"*"<<i<<"="<<num*i;
    }
    
    return 0;
}

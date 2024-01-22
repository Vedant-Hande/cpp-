#include <iostream>
using namespace std;
//void swap(int, int);
int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    //  cout<<"\n after swapping =";
    // cout<<"\n a="<<a<<"\n b="<<b;
}
int main()
{
    int a, b;
    cout << "\n enter the 1st  number =";
    cin >> a;
    cout << "\n enter the 2nd number =";
    cin >> b;
    cout << "\n before swaping =";
    cout << "\n a=" << a << "\n b=" << b;
    swap(&a,&b);
    cout << "\n after swapping =";
    cout << "\n a=" << a << "\n b=" << b;
    return 0;
}


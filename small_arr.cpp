#include <iostream>
using namespace std;
int main()
{
    int a[5], i, n, small ;
    cout << "enter the element =" << endl;
    for (i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    cout << "\n array elemnts are inserted";
    for (i = 0; i < 5; i++)
    {
        small=a[0];
        if (a[i] < small)
        
        {
            small = a[i];
        }
    }

    cout << "\n smallest element in array  =" << small;

    return 0;
}

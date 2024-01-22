#include <iostream>
using namespace std;
int main()
{
    int a[10], i, n, sum = 0;
    cout << "\n enter the size of array=";
    cin >> n;
    cout << "enter the element =" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\n array elemnts are inserted";
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << "\n  array element are =";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    cout << "\n sum of all array element =" << sum;

    return 0;
}

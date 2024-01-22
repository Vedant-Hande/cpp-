#include <iostream>
using namespace std;
int main()
{
    int a[10], i, j, n, temp;
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
        for (j = i+1; j< n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    cout << "\n array elemnt are sorted =\n";
    for (i = 0; i < n; i++)
    {
        cout<< a[i]<<endl;
    }

    return 0;
}

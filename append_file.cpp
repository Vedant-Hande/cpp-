#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream file;
    ifstream file1 ;
    ofstream file2;
    file1.open("abc.txt", ios::in);
    file2.open("xyz.txt", ios::app);
    if (!file1)
    {
        cout << "\n file is not found"; /* code */
    }
    else
    {
        file2 << file1.rdbuf();
    }
    char ch;
    file.seekg(0);
    while (file)
    {
        file.get(ch);
        cout << ch;
    }
\

    file.close();
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream file1;
    ofstream file2;
    char str[25] = "welcome to poytechnic", ch;
    file2.open("abc.txt");
    file2 << str;
    file2.close();
    file1.open("abc.txt");
    while (!file1.eof())
    {
        file1.get(ch);
        cout << ch;
        // file1.getline(str, 25);
        //  cout << "\n"  << str;
    }

    file1.close();
    return 0;
}

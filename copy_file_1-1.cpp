#include <iostream>
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream fs;
    ofstream ft;
    char ch, file1[10], file2[10];
    cout << "\n enter the source file=";
    gets(file1);
    fs.open(file1);
    cout << "\n enter the target file";
    gets(file2);
    ft.open(file2);
    while (fs.eof() == 0)
    {
        fs >> ch;
        ft << ch;
    }

    cout << "\n file copied scuessfuly ";
    fs.close();
    ft.close();
    return 0;
}

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char const *argv[])
{
    ifstream file;
    char ch;
    int num = 0;
    file.open("no_lines.txt");
    while (file)
    {
        file.get(ch);
        if (ch == '\n')
        {
            num++;
        }
    }
    cout << "\n number of lines is =" << num;
    file.close();

    return 0;
}

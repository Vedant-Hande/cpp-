#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    struct employee
    {
        /* data */
        int empid;
        char empname[10];
    } e[3];
    int i;
    for (i = 0; i < 3; i++)
    {
        cout << "\n enter the emp id =";
        cin >> e[i].empid;
        cout << "\n enter the emp name =";
        cin >> e[i].empname;
      
    }
    for (i = 0; i < 3; i++)
    {
        cout << "\n  emp id ="<<e[i].empid;
        cout << "\n  emp name ="<<e[i].empname;
    }
        return 0;
    }

#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    struct student
    {
      int roll_no;
      char name[15];
    }s[10];
    cout<<sizeof(s);    
    return 0;
}
//logic size of s = 120 beacuse of the 6*2=12 and add etra 0 to 12 than 120;
#include<iostream>
#include<string>
using namespace std;
class student 
{ 
    private:
        int roll_no;
        char name[10],depar[10];
    public:
        student(int r_no,char *n, char *d)
        { 
            roll_no=r_no;
           string name=n;
           string depar=d;
        }
        void setdata()
        { 
cout<<"\n roll_no"<<roll_no;
cout<<"\n name"<<name;
cout<<"\n depar"<<depar;
        }
};
int main()
{
    student s( 1,"vedant","IT");
    s.setdata();

    
    return 0;
}

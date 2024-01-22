#include<iostream>
using namespace std;

class student
{
    private:
            int  id;
            char name[10];
    public:
            void in()
            {
                cout<<"emter the id ="<<endl;
                cin>>id;
                cout<<"enter the name ="<<endl;
                cin>>name;
            }
            void out()
            {
                cout<<"id ="<<id<<endl;
                cout<<"name="<<name<<endl;
            }
};
 
class test:virtual public student
{
    private:
            int mark;
    public:
            void setdata()
            {
                cout<<"enter marks="<<endl;
                cin>>mark;
            }
            void getdata()
            {
                cout<<"marks ="<<mark<<endl;
            }
};
 class sport:public virtual student
{
    private:
            char grade[2];
    public:
            void pect()
            {
                cout<<"enter grade ="<<endl;
                cin>>grade;
            }
            void display()
            {
                cout<<"grade ="<<grade;
            }
};

class result:public test, public sport
{
private:
        float per;
public:
        void set()
        {
            cout<<"enter per ="<<endl;
            cin>>per;
        }
        void get()
        {
            cout<<"per ="<<per<<endl;
        }
};

int main()
{
    result R;
    R.in();
    R.setdata();
    R.pect();
    R.set();
    cout<<"--------------------------------";
    R.out();
    R.getdata();
    R.display();
    R.get();
    return 0;

    
}


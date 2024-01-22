#include <iostream>
using namespace std;
class book
{
private:
    char title[10], author_name[10], publication[10];

public:
    void setdata()
    {
        cout << "\n enter the title =";
        cin >> title;

        cout << "\n enter the author-name =";
        cin >> author_name;

        cout << "\n enter the publiction =";
        cin >> publication;
    }
    void getdata()
    {
        cout << "\n title =" << title;
        cout << "\n author-name =" << author_name;
        cout << "\n publication =" << publication;
    }
};
int main(int argc, char const *argv[])
{
    book b[5];
    book *p;
    int i;
    p = &b[0];
    for (i = 0; i < 5; i++)
    {
        p->setdata();
        p++;
    }
    p = &b[0];
    for (i = 0; i < 5; i++)
    {
        p->getdata();
        p++;
    }

    p->getdata();
    return 0;
}

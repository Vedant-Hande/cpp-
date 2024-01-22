
/* compile time polymorphism is achived by using funcation overloading .
    during the compilation time c++ compileer determine which funcation is used on thier basis of parameter and return type;
    the object is bound to the funcation call at atime of an compilation;
    it provided fast excuation speed than run time polymorphism;
    it is less flexibal;
    ex- 1] normal funcation call;
        2] overloaded funcation call;

    funcation overloading is a compile time polymorphism where the funcation with an same fuction name with an different parameters
    and different return type;
    we can cerate the family of an funcation with thee help of funcation overloading ;
    fucation deside which funcation is used on thier basis of and  para & return type;
*/

#include <iostream>
using namespace std;
int area(int a)
{
    return (3.14 * a * a);
}
int area(float l, float b)
{
    return (l * b);
}
int area(int l, int b)
{
    return (0.5 * l * b);
}
int volume(int a)
{
    return (a * a * a);
}
int volume(int r, int h)
{
    return (3.14 * r * h);
}
int main(int argc, char const *argv[])
{
    cout << "\n area ofa n circle =" << area(10);
    cout << "\n area of an rectangle =" << area(10.1f, 20.2f);
    cout << "\n area of an triangle =" << area(10, 20);
    cout << "\n vloume of an circle =" << volume(10);
    cout << "\n vloume of an clyinder =" << volume(3, 14);
    return 0;
}

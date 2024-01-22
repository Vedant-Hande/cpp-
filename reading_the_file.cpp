#include<iostream>
#include<fstream>
using namespace std;
int main()
{
  ifstream file;
  char ch;
  file.open("abc.txt");
  cout<<"\n file data =";
  while (!file.eof())
  {
    file.get(ch);
    cout<<ch;
  }
  return 0;    
}
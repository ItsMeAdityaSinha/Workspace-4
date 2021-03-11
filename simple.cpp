#include<iostream>
using namespace std;
char a='c';
int b=10;
class scopeop
{
public:
void inp();
void disp()
{
 char a='b';
 int b=10;
 cout<<b;
cout<<a;
cout<<::a;
}
};
void scopeop::inp()
{
    cout<<::b;
}
int main( )
{
scopeop s;
s.disp();
char a='c';
cout<<::b;
cout<<a;
cout<<::a;
}
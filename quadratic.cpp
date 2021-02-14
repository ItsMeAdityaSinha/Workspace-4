#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,c,d,r1,r2,rp,ip;
    cout<<"Enter the value of a,b,c";
    cin>>a>>b>>c;
    d=b*b-4*a*c;
    cout<<d<<endl;
    if (d>0)
    {
        r1=(-b+sqrt(d))/(2*a);
        r1=(-b-sqrt(d))/(2*a);
        cout<<"Roots are real"<<r1<<endl;
        
    }
    else if (d==0)
    {
        r1=-b/(2*a);
        cout <<"Roots are equal"<<r1<<endl;
    }
    else
    {
        rp=-b/(2*a);
        ip=sqrt(-d)/(2*a);
        cout<<"Roots are imaginary"<<endl;
        
    }
    return 0;
}
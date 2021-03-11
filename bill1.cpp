#include<iostream>
using namespace std;
int main()
{
    int units;
    double sum;
    string ch;
    char str1[]={"domestic"},str2[]={"commercial"};
    cout<<"Enter domestic or commercial=";
    cin>>ch;
    cout<<"Enter the number of units consumed=";
    cin>>units;
    if(ch==str1)
    {
        if(units<=100)
        cout<<"Fixed rent is 500, no additional fees";
        else
        {
            sum=(units-100)*10+500;
            cout<<"The bill consumed is="<<sum;
        }
    }
    if(ch==str2)
    {
        if(units<=500)
        cout<<"Fixed rent is 2000, no additional fees";
        else
        {
            sum=(units-500)*15+2000;
            cout<<"The bill consumed is="<<sum;
        }
    }
    return 0;
}
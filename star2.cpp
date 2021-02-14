#include <iostream>
using namespace std;
int main()
{
    int j, r,k=0;
    cout <<"Enter number of rows: ";
    cin >> r;
    for(int i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        cout<<" ";
        for(k=1;k<=i-1;k++)
        cout<<"10";
        cout<<"1";
        cout<<"\n";
    }
    return 0;
}
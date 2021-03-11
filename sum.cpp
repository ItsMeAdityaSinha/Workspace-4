#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    input:
    cin>>n;
    if(n>0)
    {
        sum=sum+(n*n);
        goto input;
    }
    cout<<sum<<endl;
    return 0;
}
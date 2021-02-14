#include <iostream>
using namespace std;
int main()
{
    int j, r,k=0;
    cout <<"Enter number of rows: ";
    cin >> r;
    for(int i=1;i<=r;++i,k=0)
    {
        for(j=1;j<=r-i;++j)
        {
            cout<<"  ";
        }

        while(k!=2*i-1)
        {
            cout << "* ";
            ++k;
        }
        cout<<endl;
    }    
    return 0;
}
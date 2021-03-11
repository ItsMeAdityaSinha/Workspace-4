#include <iostream>
using namespace std;
//8,-2,-5,20,15,4,-7,12,16,-9
int main()
{
    int n,i,num,sum=0,c=0;
    cout<<"Enter the total numbers";
    cin>>n;
    for(i=1;i<=n;++i)
    {
        cout<<"Enter the numbers";
        cin>>num;
        if(num>0)
        {
            sum=sum+num;
            ++c;
        }

    }

    float avg=(float)sum / c;
    cout<<"The average is"<<avg<<endl;
    return 0;
}

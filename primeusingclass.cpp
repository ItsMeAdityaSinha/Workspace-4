#include<iostream>
using namespace std;
class prime
{
  public:

    int check(int n) 
    {
        int i, flag=0;
        for(i=2;i<n;i++) 
        {
            if (n%i==0) 
            {
            flag=1;
            break;
            }
        }
        return flag;
    }
};
int main() 
{
    int n,p;
    cout<<"Enter a number:";
    cin>>n;
    prime obj;
    p=obj.check(n);
    if (p==0) 
    cout<<"Number is prime";
    else 
    cout<<"Number is not prime";
    return 0;
}
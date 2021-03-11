#include<iostream>
using namespace std;
int main()
{
  int n,i,m=0,flag=0;  
  cout<< "Enter the Number=";  
  cin>> n;  
  m=n/2;  
  for(i=2;i<=m;i++)  
  {  
    if(n%i==0)  
    {  
        int rn=0,r;
        while(n!=0)
        {
            r=n%10;
            rn=rn*10+r;
            n/=10;
        }
        cout<<"The reversed number is="<<rn<<endl;
        flag=1;  
        break;  
    }  
  }  
  if(flag==0)
  {
      int d,t=0;
      do
      {
        d=n%10;
        t+=(d*d);
        n=n/10;
      }while(n>0);
      cout<<"The sum of the square of the digits are="<<t<<endl;
  }
  return 0;
}
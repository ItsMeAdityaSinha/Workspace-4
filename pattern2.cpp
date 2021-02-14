#include<iostream>
#include<string.h>
using namespace std;
int main()
{
  int i,j,bl,n;
  char s[30];
  cout<<"Enter any name=";
  cin>>s;
  n=strlen(s);
  for(i=0;i<n;i++)
  {
      for(bl=0;bl<n-i-1;bl++)
      cout<<" ";
      for(j=0;j<=i;j++)
      cout<<s[j];
      cout<<endl;
  }
}
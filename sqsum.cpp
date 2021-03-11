#include <bits/stdc++.h> 
using namespace std; 
int squaresum(int n) 
{ 
    int sum = 0; 
    for (int i = 1; i <= n; i++) 
    sum += (i * i); 
    return sum; 
} 
int main() 
{ 
    int n,i;
    cout<<"Enter the number=";
    cin>>n;
    for(i=2;i<=squaresum(n);i++)
    {
        if(squaresum(n)%i==0)
        cout<<squaresum(n)<<endl;
    }
    return 0; 
}
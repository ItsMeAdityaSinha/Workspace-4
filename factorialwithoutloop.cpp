#include <iostream>
using namespace std;
int findFactorial(int n)
{
	if(n==2)
	{
		return n;
	}
	return n*findFactorial(n-1);
}
int main()
{
	int*ptr;
	int n;
	cout<<"Enter a number to find factorial : "<<endl;cin>>n;
	ptr=&n;
	cout<<findFactorial(*ptr)<<endl;
}
#include <iostream> 
using namespace std;  
class fibonacci
{
    public:
    int f1,f2;
    void put(int);
};
void fibonacci::put(int n)  
{  
    f1=0;
    f2=1; 
    for (int i=0;i<=n;i++)  
    {  
        cout<<f2<<" ";  
        int next=f1+f2;  
        f1=f2;  
        f2=next;  
    }  
}   
int main()  
{  
    int n;
    cout<<"Enter till where the series to be printed=";
    cin>>n;
    fibonacci f;
    f.put(n);  
    return 0;  
}  
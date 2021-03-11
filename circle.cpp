#include<iostream>
using namespace std;
class circle 
{
public:
    float r, a;
    void circumfrence();
    void area() 
    {
        cout<<"Enter radius of a circle:";
        cin>>r;
        a=3.14*r*r;
        cout<<"Area of circle is:"<<a<<endl;
    }
};
void circle::circumfrence()
{
    
    float circum= 2*3.14*r;
    cout<<"The circumfrence is="<<circum;

}
int main() 
{

    circle kusi;
    kusi.area();
    kusi.circumfrence();
    return 0;
}
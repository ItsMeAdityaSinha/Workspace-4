#include<iostream>
using namespace std;
class conversion
{
    float cm;
    float meter( )
    {
        return cm/100;
    }
    public:
    void toinput_num( )
    {
    cout<<"\nEnter distance in cms=";
    cin>>cm;
    }
    float kilometre( )
    {
       return cm/100000;
    }
void toinput_num( )
{
    int met=meter();       
    float km=kilometre(); 
    cout<<"\nConverting to meter comes as=" <<met;
    cout<<"\nConverting to kilometer comes as="<<km;
}
};
int main()
{
    conversion lena;
    lena.toinput_num();
    //lena.todisp_value();
    return 0;
}
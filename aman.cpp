#include <iostream>
using namespace std;

int main() {
    int m,n;
    cout <<"Enter two number (Separated By Space)= ";
    cin >>n>>m;
    if (m != n) {
        if (m>n) {
            for (int i=n; i<=m; i++) {
                n=i;
                cout<<"Table - "<<n<<": ";
                for (int a=1;a<=10;a++) {
                    cout<<n*a<<" ";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}
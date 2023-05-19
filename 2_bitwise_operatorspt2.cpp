#include <iostream>
using namespace std;

int main()
{
    /* int x=3;
     cout<<(x<<1)<<endl;
     cout<<(x<<2)<<endl;
     int y=4;
     int  z=(x<<y);
     cout<<z<<endl;*/

    /* int x=33;
    cout<<(x>>1)<<endl;
    cout<<(x>>2)<<endl;
    int y=4;
    int  z=(x>>y);
    cout<<z<<endl;*/

    // unsigned input
    unsigned int x = 1;
    cout << (~x) << endl;
    x = 5;
    cout << (~x) << endl;
    // signed input
    int y = 1;
    cout << (~y) << endl;
    y = 5;
    cout << (~y) << endl;

    return 0;
}
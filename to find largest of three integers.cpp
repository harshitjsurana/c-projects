#include <iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int x,y,z,large;
    cout << "Welcome!!Program to find largest of three numbers." << endl;
    cout << "Enter three numbers:";
    cin>>x>>y>>z;
    large=x;
    if(y>x)
        large=y;
    if(z>y)
        large=z;
    cout << "largest of three numbers is:"<<large;
    return 0;
}

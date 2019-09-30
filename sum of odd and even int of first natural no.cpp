#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int n,sum_even=0,sum_odd=0,i=1;
    cout << "Upto which natural number?";
    cin>>n;
    while(i<=n)
    {
        if(i%2==0)
            sum_even+=i;
            else
                sum_odd+=i;
        i++ ;
    }
    cout<<"The sum of even integers is:"<<sum_even<<"\n";
    cout<<"The sum of odd integers is:"<<sum_odd;
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    long double temp,tempnew,choice;
    cout << "Welcome!!Program for conversion of temperature." << endl;
    cout <<"Temperature Conversion Menu:"<<endl;
    cout <<"1.Fahrenheit to Celcius"<<endl;
    cout <<"2.Celcius to Fahrenheit "<<endl;
    cout <<"Enter your choice(1-2):";
    cin>>choice;
    if(choice==1)
    {
        cout<<"Enter temperature in Fahrenheit:";
        cin>>temp;
        tempnew=(temp-32)/1.8;
        cout<<"Temperature in celcius is"<<tempnew;
    }
    if(choice==2)
    {
        cout<<"Enter temperature in Celcius:";
        cin>>temp;
        tempnew=(temp*1.8)+32;
        cout<<"Temperature in Fahrenheit is"<<tempnew;
    }

    return 0;
}

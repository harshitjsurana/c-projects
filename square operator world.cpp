#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <process.h>
using namespace std;

int main()
{
    ("cls");
    char ch,ch1;
    float a,area,peri,diagonal;
    cout << "Square Operator World:" <<"\n";
    cout << "1.Area" <<"\n";
    cout << "2.Perimeter" <<"\n";
    cout << "3.Diagonal" <<"\n";
    cout << "4.Other Information" <<"\n";
    cout << "5.About Us" <<"\n";
    cout << "6.Exit" <<"\n";

    cout << "\n Enter Your Choice:";
    do
    {
        cin>>ch;
        if(ch=='1'||ch=='2'||ch=='3')
            {cout<<"\nEnter the side of Square:";
            cin>>a;}
        switch(ch)
        {
            case'1':area=a*a;
                    cout<<"Area Is : "<<area<<"\n";
                    break;
            case'2':peri=4*a;
                    cout<<"Perimeter Is : "<<peri<<"\n";
break;
            case'3':diagonal=a*sqrt(2);
                    cout<<"Diagonal Is : "<<diagonal<<"\n";
break;
            case'4':cout<<"\n1.Square has four sides."<<"\n";
                    cout<<"\n2.Square has equal diagonals."<<"\n";
                    cout<<"\n3.Square has four angles each equal to 90."<<"\n";
                    cout<<"\n4.Area of Square is = side*side."<<"\n";
                    cout<<"\n5.Perimeter of Square is = 4*side."<<"\n";
                    cout<<"\n6.Diagonal of Square is = side*squareroot of 2."<<"\n";
break;
            case'5':cout<<"\n About Us: "<<"\n";
                     cout<<"\n Square Operator World "<<"\n";
                     cout<<" Version 1.01 "<<"\n";
                     cout<<"\n Harshit Surana"<<"\n";
                     cout<<" Mehar Soft Pvt.Ltd. "<<"\n";
                     cout<<"\n THANKS "<<"\n";

break;
             case '6': cout<<"\n Exiting.........";
                        cout<<" Press any key (Recommended-h) to exit"<<"\n";
break;
            default :cout<<"Wrong Choice"<<"\n";
                    cout<<"Enter a valid one."<<"\n";
break;
        }
    cout<<"\n Want to enter more(Y/N)?:";
    cin>>ch1;
    if(ch1=='y'||ch1=='Y')
        cout<<"Again enter your choice : (1-6):";
    }
    while(ch1=='y'||ch1=='Y');


    return 0;
}

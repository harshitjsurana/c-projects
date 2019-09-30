#include <iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character:";
    cin>>ch;
    if(ch>=65&&ch<=90)
        cout<<"\n"<<"You entered a Uppercase character.";
    else  if(ch>=99&&ch<=122)
        cout<<"\n"<<"You entered a Lowercase character.";
        else  if(ch>=48&&ch<=57)
        cout<<"\n"<<"You entered a Digit.";
        else cout<<"You entered a special character.";
    getch();
}

//Process terminated with status -1073741510 (0 minute(s), 4 second(s))


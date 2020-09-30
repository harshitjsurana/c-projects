#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cout << "Enter a character:";
    cin>>ch;
    if(ch>=65&&ch<=90){
        cout<<"\n"<<"You entered a Uppercase character."<<endl;
        cout<<"It's lowercase form is"<<ch+32<<endl;
    }
        
    else  if(ch>=97&&ch<=122){
        cout<<"You entered a Lowercase character."<<endl;
        cout<<"It's uppercase form is"<<ch-32<<endl;
    }
        else  if(ch>=48&&ch<=57)
        cout<<"\n"<<"You entered a Digit.";
        else cout<<"You entered a special character.";
    getch();
}

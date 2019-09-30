#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character:";
    cin>>ch;
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        cout<<"You entered a alphabet:"<<ch;
        else
    if(ch>='0'&&ch<='9')
        cins<<"You entered a number:"<<ch;
    else
        cout<<"You entered a character other than alphabet and number";
    return 0;
}

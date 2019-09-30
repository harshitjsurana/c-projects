#include <iostream>

using namespace std;

int main()
{
    char ch;
    cout << "Enter a character  to check whether it is a alphabet or a number:";
    cin>>ch;
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
        cout<<"You entered a alphabet:"<<ch;
        else
    if(ch>='0'&&ch<='9')
        cout<<"You entered a number:"<<ch;
    else
        cout<<"You entered a character other than alphabet and number";
    return 0;
}

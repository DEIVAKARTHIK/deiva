#include<iostream>
using namespace std;
int main()
{
char ch;
cout<<"Enter a char "<<endl;
cin>>ch;
if((ch >= 'a' && ch <='z') || (ch >='A' && ch <= 'Z'))
cout<<ch<<" is an alphabetic";
else
cout<<ch<<" is not an alphabetic";
return(0);
}

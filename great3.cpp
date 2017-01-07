#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter three numbers"<<endl;
cin>>a>>b>>c;
if(a>b && a>c)
cout<<a<<" is a greatest number";
else if(b>c)
cout<<b<<" is a greatest number";
else
cout<<c<<" is a greatest number";
return(0);
}

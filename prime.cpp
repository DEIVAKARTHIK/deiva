#include<iostream>
using namespace std;

int main()
{
int num;
int flag=0;
cout<<"enter a number"<<endl;

cin>>num;
if(num<0)
{
    cout<<"Negative number";
    }
    else
    {
for(int i=2;i<=num/2;i++)
{
if(num%i == 0)
{
cout<<num<<" is not a prime number";
flag=1;
break;
}
}
if(flag==0)
cout<<num<<" is a prime number";
}
return(0);
}

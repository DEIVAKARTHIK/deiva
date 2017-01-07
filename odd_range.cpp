#include<iostream>
using namespace std;

int main()
{
int start,final;
cout<<"Enter a starting and ending values"<<endl;
cin>>start>>final;
cout<<"Odd numbers are "<<endl;
for(int i=start;i<=final;i++)
{
if(i%2 != 0)
cout<<i<<endl;
}
return(0);
}
#include<iostream>
using namespace std;
int main()
{
int num,data,count=0;
cout<<"Enter a num"<<endl;
cin>>num;
data=num;
do
{
++count;
num = num / 10;
}while(num!=0);
cout<<data<<" is "<<count<<" digits";
return(0);
}
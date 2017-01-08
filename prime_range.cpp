#include<iostream>
using namespace std;

int main()
{
int num,st,end;
int flag=0;
cout<<"enter a range"<<endl;
cin>>st>>end;

for(num=st;num<=end;num++)
{

for(int i=2;i<=num/2;i++)
{
if(num%i == 0)
{
flag=1;
break;
}
else
flag=0;
}
if(flag==0)
cout<<endl<<num;

}

return(0);
}
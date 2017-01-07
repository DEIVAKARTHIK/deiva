#include<iostream>
using namespace std;
int main()
{
int num,pwr;
float sum=1.0;
cout<<"enter a num"<<endl;
cin>>num;
cout<<"enter a power"<<endl;
cin>>pwr;
if(pwr==0)
cout<<"power of "<<num<<" is 1";
if(pwr>0)
{
for(int i=0;i<pwr;i++)
sum*=num;
cout<<"power of "<<num<<" is "<<sum;
}
if(pwr<0)
{
for(int i=0;i>pwr;i--)
sum*=num;
sum=1/sum;
cout<<"power of "<<num<<" is "<<sum;
}


return(0);
}f
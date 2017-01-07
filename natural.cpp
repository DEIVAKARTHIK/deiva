#include<iostream>
using namespace std;

int main()
{
int num,sum=0;
cout<<"Enter the num"<<endl;
cin>>num;
if(num<1)
cout<<"it is not a natural number";
for(int i=1;i<=num;i++)
{
sum+=i;
}
cout<<"Sum of natural number is "<<sum;
return(0);
}
#include<iostream.h>

int main()
{
int number,i,sum=0;

cout<<"Enter a number"<<endl;
cin>>number;

for(i=1;i<=number;i++)
{
sum = sum*i;
}

cout<<"Factorial of "<<number<<" is "<<sum<<endl;
return(0);
}

#include<iostream.h>

int main()
{
int number,i,sum=1;

cout<<"Enter a number"<<endl;
cin>>number;
if(number > 0 )
{
for(i=1;i<=number;i++)
{
sum = sum*i;
}

cout<<"Factorial of "<<number<<" is "<<sum<<endl;
}
else
{
cout<<"You entered negative number";
}
return(0);
}

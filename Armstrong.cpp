#include<iostream.h>

int main()
{
int inputNumber, num, remainder, sum=0;

cout<<"Enter your number:"<<endl;
cin>>inputNumber;
num = inputNumber;
if(inputNumber > 0)
{
while(num != 0)
{

remainder = num % 10;
sum = sum + (remainder*remainder*remainder);
num = num / 10;
 
}

if(sum == inputNumber)
{
cout<<inputNumber<<" is Armstrong Number"<<endl;
}
else
{
cout<<inputNumber<<" is not Armstrong Number"<<endl;
}
}
else
{
cout<<"You entered negative number";
}
return(0);
}
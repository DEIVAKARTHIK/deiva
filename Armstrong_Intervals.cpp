#include<iostream.h>

int main()
{
int starting, ending, num, remainder, sum, i;

cout<<"Enter your intervals:"<<endl;
cin>>starting>>ending;

if(starting > 0 && ending > 0 )
{ 
for(i=starting;i<=ending;i++)
{
num = i;
sum = 0;

while(num != 0)
{

remainder = num % 10;
sum = sum + (remainder*remainder*remainder);
num = num / 10;
 
}

if(sum == i)
{
cout<<"Armstrong Number "<<i<<endl;
}

}
}
else
{
cout<<"You entered negative number";
}
return(0);
}
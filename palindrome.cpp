#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0,data;
    cout<<"Enter a number"<<endl;
    cin>>n;
    data=n;
   for(int i=0;n!=0;i++)
     {
         rem = n%10;
         n = n/10;
         sum = sum*10 + rem;
    }
    if(data==sum)
         cout<<data<<" is Palindrome"<<endl;
    else
                  cout<<data<<" is not a Palindrome"<<endl;

    return 0;
}
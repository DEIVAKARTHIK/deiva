#include <stdio.h>

int main(void) {
	int n;
	printf("\n enter the number");
	scanf("%d",&n);
	if(n!=0)
	{
		if(n>0)
		printf("Number is positive");
		else
		printf("Number is negative");
	}
	else 
	printf("Number is zero");
	return 0;
}
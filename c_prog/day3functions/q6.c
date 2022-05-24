/*Write a recursive function to find factorial of a number. */


#include<stdio.h>
long int fact(int n);
int main(void)
{
	int num;
	printf("Enter Number to Find Factorial : ");
	scanf("%d",&num);
	if(num < 0)				
	{
		printf("No factorial for negative number\n");
	}
	else
	{
		printf("factorial of %d is %ld\n",num,fact(num));
	}
	return 0;
}
long int fact(int n)
{
	if(n==0)
		return 1;
	return(n*fact(n-1));				
}

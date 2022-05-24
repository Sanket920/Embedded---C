/*    5. Write a program to reverse an integer number.
Use recursion.*/


#include<stdio.h>
int reverse(int );				
int main()
{
	int num,res;
	printf("Enter Any Number to Print Reverse : ");
	scanf("%d",&num);
	res= reverse(num);
	printf("reverse of %d is %d\n",num,res);
	return 0;
}
int reverse(int num) 					
{
	static temp,sum;
	if(num>0)				
	{
		temp = num %10;
		sum = sum *10 + temp;
		reverse(num/10);
	} 
	else 
	{
		return sum;
	}
 
 }	

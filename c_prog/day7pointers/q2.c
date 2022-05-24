/*  Write a C program to declare an integer and an integer pointer to it. Initialize the integer variable. Print the value of the int variable using pointer variable.
Hint: You can use dereferencing operator *.   */



#include<stdio.h>
void main()
{
	int a= 50;
	int *p;
	
	p=&a;
		
	printf("Velue of Integer Variable is %d\n",a);
	printf("Value of Pointer Variable is %d\n",*p);
}	

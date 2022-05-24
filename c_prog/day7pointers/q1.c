/*  Write a C program that declares and initializes (to any value you like) a char, an int, a double and a float. Your program should then print the address of, and value stored in, each of the variables. 
Use the format string "%u" [%p in hex] to print the addresses as unsigned integers. 
Hint: You can use the character “&” to find addresses.  */


#include<stdio.h>
void main()
{
	int a= 50;
	char ch= 'A';
	float f= 94.06;
	double d= 123456.5505;
	
	printf("\nAddress of an Integer Variable 'a' is %p\n  And value of Integer 'a' is %d \n	    Size of Integer is %ld",&a,a,sizeof(a));
	printf("\nAddress of an Char Variable 'ch' is %p \n  And value of Char Variable 'ch' is %d \n	    Size of Char is %ld",&ch,ch,sizeof(ch));
	printf("\nAddress of an Float Variable 'f' is %p \n  And value of Float Variable 'f' is %f \n	    Size of Float is %ld",&f,f,sizeof(f));
	printf("\nAddress of an Double Variable 'd' is %p \n  And value of Double Variable 'd' is %lf \n	    Size of double is %ld\n",&d,d,sizeof(d) );
	
}	

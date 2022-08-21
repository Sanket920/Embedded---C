/* Write a program to perform addition of two int or char or float numbers.
	• If we need to do the addition of two integers then it should compile the code related to the addition of integers.
	• If we need to do the addition of two float then it should compile the code related to the addition of float numbers.
	• Use conditional compilation   */
	
	
#include<stdio.h>
#define ADD a+b
#define ADD1 c+d
int main()
{
	int a,b;
	float c,d;
#ifdef ADD
  printf("enter numbers for adition of real no : \n");					
  scanf("%d%d",&a,&b);
  printf("enter no integer for addition : \n");
  scanf("%f%f",&c,&d);				
  printf("addition of two numbers a and b:%d\n", ADD);
  printf("addition of two numbers c and d:%0.4f\n", ADD1);
	
#else

  printf("addition is not defined");
	
#endif
  return 0;
}

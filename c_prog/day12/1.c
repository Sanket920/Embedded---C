// Write a program to find the volume of a sphere using macros. Pass the radius as the argument to the macro.

#include <stdio.h>
#define PI 3.14
#define radius(r) r*r
int main()
{
	float r,  volume;
	printf("enter the radius:\n");
	scanf("%f",&r);
	
	volume = (4.0/3)*PI*r*r*r; 						/* Volume of sphere formula*/
	
	printf("volume of sphere: %0.4f\n",volume);				/* Printing volume of sphere */
	return 0;
}	

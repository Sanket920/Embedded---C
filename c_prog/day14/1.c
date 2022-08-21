/* Write a program to find the smallest and greatest integers among all integers, which are provided through the command line.*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int minimum,maximum;
if(argc != 2 )
{
    printf("Please input the number of integers as ./a.out number\n");
    return 1;
}
printf("enter the %d number", atoi(argv[1]));
int arr[atoi(argv[1])];
for(int i = 0; i< atoi(argv[1]); i++)
{
    scanf("%d",&arr[i]);
}
//for largest and  smallest integer among all integers
maximum = arr[0];
minimum = arr[0];
    for ( int c = 1 ; c < atoi(argv[1]) ; c++ )
    {
		//for largest
                if ( arr[c] > maximum )
		{
		   maximum = arr[c];
		}
                //for smallest
                if ( arr[c] < minimum )
                {
                   minimum = arr[c];
                }
    }
printf("largest integer is = %d \n",maximum);
printf("smallest integer is = %d \n",minimum);
}

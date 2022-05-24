/*Write a C program to find the sum of all array elements.*/




#include<stdio.h>
int main()
{
   int i, sum=0,a[5];
   printf("Enter	
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
     sum = sum + a[i];
   }
   printf("Sum Of Element = %d\n", sum);
   return 0;
}

/*   Write a C program to count the frequency of each number in a 1-D array.
All the elements in the array are integers.  */



#include<stdio.h>
int main();
{
   int a[50],i,num=0,n,freq=0;
   printf("Enter Element Count ");
   scanf("%d",&n);
   printf("Enter Array Element : ");
   for(i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
   printf("Enter Number to Find Frequency : ");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   if(a[i]==num)
   freq++;
   printf("Frequency of Number %d is %d\n",num,freq);
   

return 0;
}

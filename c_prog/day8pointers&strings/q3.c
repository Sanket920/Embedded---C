/*Write a program in C to store n elements(read from standard input) in an array and print the elements using pointer*/




#include<stdio.h>

int main()

{
   int arr[10];

      int  *ptr1;

    ptr1=arr;

   for(int i=0;i<10;i++)
   {
	scanf("%d",&arr[i]);
   }

   for(int i=0;i<10;i++)
   {
        printf("%d\t",*ptr1);
	ptr1++;
   }

}

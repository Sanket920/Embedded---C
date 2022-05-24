/*Write a swap function to perform the swap operation.*/  



#include<stdio.h>				
void swap(int a, int b);
int main()
{
   int a,b;
   printf("Enter Two Number : ");
   scanf("%d %d", &a,&b);
   printf("Entered Number is A= %d & B= %d\n", a,b);
   swap(a,b);
   return 0;
}
void swap(int a,int b)					
{
   int c;
   c=a;					
   a=b;				
   b=c;						
   printf("Swapped Number is A= %d & B= %d\n",a,b);
}

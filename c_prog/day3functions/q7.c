/*   Write a function to swap contents of two variables using functions 
*/


#include<stdio.h>
void swap(int *, int *);
int main()
{
   int a,b;
   printf("Enter Two Number to Perform Swap Operation : ");
   scanf("%d %d", &a,&b);
   printf("Entered Number is A= %d & B= %d\n", a,b);
   swap(&a,&b);						
   printf("Swapped Number is A= %d & B= %d\n",a,b);
   return 0;
}
void swap(int *a,int *b)					
{
   int c;
   c=*a;
   *a=*b;
   *b=c;
}

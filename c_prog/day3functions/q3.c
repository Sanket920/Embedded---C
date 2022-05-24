/*Write a program to print the prime Fibonacci numbers in a given range.*/


   #include<stdio.h>
int fibonacci(int i);						
int pri(int a);
int main()
{
  int n,a,i,b,z;
  printf("Enter Number for Fabinacci : ");
  scanf("%d",&n);
  
  for (i = 0; i < n; i++)				
     printf("%d\t", fibonacci(i));
  
  printf("\n\nPrime Number in Fibonacci Seris : \n");
  
  for (i = 0; i < n; i++)					
  {
     a= fibonacci(i);					
     z= pri(a);						
  }
  printf("\n");
  return 0;
}
 
int pri(int a) 
{ 
  int count=0,i;
  for (i = 1; i <= a; i++)
   {
    if(a%i==0)
     {
       count++;
     }
   }
   if(count==2)
    printf("%d\t", a);
}

int fibonacci(int i)
{
   if(i == 0) return 0;
   if(i == 1) return 1;
   return (fibonacci(i-1) + fibonacci(i-2));
}

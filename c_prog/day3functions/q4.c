/*     ake the range of numbers as input and print all the prime Fibonacci numbers as output. Use Functions. Try with non-recursive and recursive functions.
*/


#include<stdio.h>
int a,num;					
int fibonacci(int num);
int prime(int c);

int main()
{
    int b,c,i,j;
    printf("Enter Range to print Prime Fibonacci numbers Series: \n");
    scanf("%d%d",&a,&num);							
    fibonacci(num);								
    printf("\n");
    return 0;
}

int fibonacci(int num)
{
    int n1=0,n2=1,c,count=0,j,k;
    for(int i=1;i<=num;i++)							
     {
       c=  n1+n2;
       n1= n2;
       n2= c;
       if(c<=num)								
 	 prime(c);								
     }
}

int prime(int c)							
{
    int count=0;
    for(int i=1;i<=c;i++)
        if(c%i==0)
            count++;

    if(count==2)							
	if(c>=a && c<=num)							
        printf("%d\t",c);
}


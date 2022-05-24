#include<stdio.h>
int main()
{
int  i= 8, j = 5, l,n, p; 
float  x = 0.005,  y = 0.01,m,o; 
char c = 'c' , d='d' ; 


 l= (3*i*j)%(2*d);
 m = (i*j)%(c+2*d) / (x*y);
 n = 5 * (i + j) > 'c';
 o= 2*x+ (y== 0);
 p = (x > y) && (i > 0) || (j < 5);

 
printf("1st=  %d\n  ",l); 
printf("2nd=  %f\n ",m); 
printf("3rd=  %d\n " ,n); 
printf("4th = %f\n ",o);
printf("5th = %d\n ",p);

return 0;
}

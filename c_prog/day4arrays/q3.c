/*Write a C Program to display one dimensional array elements with addresses*/



#include<stdio.h>
int main();
{
int i,a[5];
   printf("Enter Array Element : ");
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
    printf("Array Element a[%d] is %d & Address is %p\n", i,a[i],&a[i]); 
   }



return 0;
}

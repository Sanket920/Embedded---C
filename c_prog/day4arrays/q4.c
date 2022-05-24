/*Write a C Program to Find Greatest Element in Array in one dimensional array */


#include<stdio.h>
int main()
{
   int a[5],i,num=0;
   printf("Enter Array Element : ");
   for(i=0;i<5;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
      if(a[i]>num)
        num=a[i];
   printf("Greatest No. in Array is %d\n",num);
   return 0;
}

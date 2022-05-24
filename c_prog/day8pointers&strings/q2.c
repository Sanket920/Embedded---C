/*Write a C program to read through an array of any type using pointers. Copy the elements of the first array to second array using pointers.
 * Hint: a[i] = *(a+i)*/





#include<stdio.h>

int main()
{
   char str1[20],str2[20];

   char *ptr1,*ptr2; 

   ptr1=str1;
   ptr2=str2;


   int i;

  

   printf("enter a first string: ");
   scanf("%s",str1);

   printf("enter a second string: ");
   scanf("%s",str2);

   while(*ptr1!='\0')

   {
     *ptr2=*ptr1;
     ptr1++;
     ptr2++;
     
   }
}

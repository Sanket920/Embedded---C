/*C program to search element in array (1-D)using pointers in c*/


#include<stdio.h>
#include<string.h>

char   search(char *,char  *);

int main()

{
   char str[20],m[20];

   printf("enter a string element: ");
   gets(str);

   printf("enter a search element: ");
   gets(m);

   search(str,m);
   return 0;
}

char search(char *str,char *m)

{
       
   if(*m==*str)

    printf("it is search element");	   

  else
       printf("it is not present");
 }

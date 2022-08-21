/*    5. Write a C program to demonstrate functionality of the fseek library function. (Use SEEK_SET, SEEK_CUR, SEEK_END. )
*/

#include <stdio.h>
int main ()
{
   FILE *fp;
   char d[60];
   fp = fopen ("test.c","w");
   fputs("seek funtion", fp);
   
   fgets ( d, 60, fp );
   printf("Before fseek - %s", d); 
 
   
   fseek(fp, 20, SEEK_SET);
   fgets ( d, 60, fp );
   printf("\nAfter SEEK_SET to 20 - %s", d);
 
 
   fseek(fp, 10, SEEK_CUR);
   fgets ( d, 60, fp );
   printf("\nAfter SEEK_CUR to 10 - %s", d);
 
   
   fseek(fp, -7, SEEK_END); 
   fgets ( d, 60, fp );
   printf("\nAfter SEEK_END to -7 - %s", d);
 
   
   fclose(fp);
   return 0;
}

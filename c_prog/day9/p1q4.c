/*    4. Write a program to read n number of strings using two-dimensional character array, sort them and display the sorted list of strings on the screen. (use strcmp and strcpy library functions) 
*/



#include<stdio.h>
#include<string.h>
int main(){
   int i,j,count;
   char str[25][25],temp[25];
   printf("How many strings u are going to enter?: ");
   scanf("%d",&count);
   printf("Enter Strings : ");
   for(i=0;i<=count;i++)
      gets(str[i]);
   for(i=0;i<=count;i++)
      for(j=i+1;j<=count;j++){
         if(strcmp(str[i],str[j])>0){
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
         }
      }
   printf("Sorted Strings are:");
   for(i=0;i<=count;i++)
      puts(str[i]);
   
   return 0;
}



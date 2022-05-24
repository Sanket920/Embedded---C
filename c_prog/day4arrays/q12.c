/*  Write a C Program to display three-dimensional array elements with addresses  */


#include<stdio.h>
int main()
{
   int x,y,i,a[10][10][10],j,k;
   printf("Enter Size of Row & Column : ");
   scanf("%d %d1",&x,&y);
   printf("Enter Array Element : ");
   
   for(i=0;i<2;i++)
     for(j=0;j<x;j++)
       for(k=0;k<y;k++)
         scanf("%d",&a[i][j][k]);
   
   for(i=0;i<2;i++)
   {
    printf("matrix %d :\n",i);
     for(j=0;j<x;j++)
      {
       for(k=0;k<y;k++)
         printf("%d",a[i][j][k]);
      
       printf("\n");
      }
    printf("\n"); 
   }
              
   for(i=0;i<2;i++)
     for(j=0;j<x;j++)
       for(k=0;k<y;k++)
         printf("Array Element a[%d][%d][%d] is %d & Address is %p\n", i,j,k,a[i][j][k],&a[i][j][k]); 
   return 0;
}

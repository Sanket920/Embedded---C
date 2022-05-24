/*Write a C program to copy the elements of one 2-D array to another 2-D array.*/




    #include <stdio.h>

    int main()
    {
       
       int x,y,i,a[10][10],j,b[10][10];
   printf("Enter Size of Row : ");
   scanf("%d",&x);
   printf("& Column : ");
   scanf("%d",&y);
   printf("Enter Array Element : \n");
   
   for(i=0;i<x;i++)
     for(j=0;j<y;j++)
       scanf("%d",&a[i][j]);
   
   for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
      {
        printf("%d ",a[i][j]);
      }
        printf("\n");
    }
    printf("\nCopy of Element\n");
   for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
       {
         b[i][j] =a[i][j];
       }
    }
   for(i=0;i<x;i++)
    {
     for(j=0;j<y;j++)
      {
        printf("%d ",b[i][j]);
      }
        printf("\n");
    }
   return 0;
}

/*Write a C Program to sort elements in 1-D Array*/


    #include <stdio.h>    
         
    int main()    
        
            
   {
   int a[10],s,i,j,c;
   printf("Enter Array Element : ");
   for(i=0;i<10;i++)
   {
     scanf("%d",&a[i]);
   }
   for(i=0;i<10;i++)
      for(j=i+1;j<10;j++)
       {
         if(a[i]>a[j])
           {
              c   = a[i];
              a[i]= a[j];
              a[j]= c;
           }
       }
   printf("After Sort");
   for(i=0;i<10;i++)
     printf("	%d",a[i]);
     printf("\n");
   return 0;
}

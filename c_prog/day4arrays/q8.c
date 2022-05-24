/*Write a C Program to display two-dimensional array elements with addresses*/




#include<stdio.h>
int main(){
   
   int arr[2][3];
   
   int i, j;
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("Enter value for array[%d][%d]:", i, j);
         scanf("%d", &arr[i][j]);
      }
   }
  
   printf("Two Dimensional array elements:\n");
   for(i=0; i<2; i++) {
      for(j=0;j<3;j++) {
         printf("%d ", arr[i][j]);
         if(j==2){
            printf("\n");
         }
      }
   }
   return 0;
}

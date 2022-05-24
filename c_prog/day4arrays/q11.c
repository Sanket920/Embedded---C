//Write a C program to print the inverse matrices of a given matrix.

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int A[2][2],d,adjA[2][2];
	int i,j;
	int invA[2][2];
	printf("Enter elements for 2 * 2 matrix\n");
	for(i=0;i<2;i++)
	{
        for(j=0;j<2;j++)
        {
            scanf("%d",&A[i][j]);                                       
        }
	}
	d = (A[0][0]*A[1][1])-(A[0][1]*A[1][0]);				
	if(d==0)
	{
        	printf("Determinant cannot be ZERO");
        	return 0;
    	}
    	adjA[0][0]=A[1][1];					 
    	adjA[1][1]=A[0][0];
    	adjA[0][1]=-A[0][1];
    	adjA[1][0]=-A[1][0];
    	printf("Matrix A is\n");
	for(i=0;i<2;i++)
    	{
    		for(j=0;j<2;j++)
		{
            		printf("%d ",A[i][j]);
        	}
       	 printf("\n");
    	}
    	printf("Inverse of Matrix A is\n");					
    	for(i=0;i<2;i++)
    	{
        	for(j=0;j<2;j++)
        	{
            		invA[i][j]=(adjA[i][j])/(int)d;
            		printf("%.1d ",invA[i][j]);
        	}
        	printf("\n");
    	}
    	return 0;
}

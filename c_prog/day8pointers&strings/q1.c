/*    1. Write a program to perform the swap operation 
Write a swap function and use call by reference.*/



#include<stdio.h>
void swap(int *, int *);    
int main()  
{  
        int a = 10;  
        int b = 20;   
        printf("Before swapping the values in main a = %d, b = %d\n",a,b);  
        swap(&a,&b);  
        printf("After swapping values in main a = %d, b = %d\n",a,b);  
    }  
    void swap (int *a, int *b)  
    {  
        int temp;   
        temp = *a;  
        *a=*b;  
        *b=temp;  
        printf("After swapping values in function a = %d, b = %d\n",*a,*b);   
   
   return 0;
    }      
        
        
        
    
    
        
        

        

/*Develop a C program to find sum of all odd numbers upto N using while loop.*/    

#include<stdio.h>  
      
    int main()  
    {  
        int num, i = 1, sum = 0;  
      
        printf("Enter a integer number\n");  
        scanf("%d", &num);  
      
        while(i <= num)  
        {  
            if(i%2 != 0)  
            {  
                sum = sum + i;  
            }  
            i++;  
        }  
      
        printf("Sum of ODD integer number is %d\n", sum);  
      
        return 0;  
    }  

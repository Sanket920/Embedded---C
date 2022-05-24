/*Write a C Program to Reversing the 1-D Array Elements */





#include<stdio.h>

int main()
{
    int arr[5], i;
    printf("Enter elements: ");
    for(i=0; i<5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n array elements in reverse order:\n");
    for(i=4; i>=0; i--)
    {
        if(i==0)
            printf("%d", arr[i]);
        else
            printf("%d, ", arr[i]);
    }
    
    return 0;
}



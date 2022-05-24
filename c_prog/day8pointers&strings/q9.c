/*    9. Write a program in C to count the number of vowels and consonants in a string using a pointer.
*/


#include <stdio.h>
int main()
{
    char str1[50];
    char *ptr;
    int  V,C;
    printf(" enter a string: ");
    fgets(str1, sizeof str1, stdin);

    ptr=str1;

    V=C=0;
    while(*ptr!='\0')
    {
        if(*ptr=='A' ||*ptr=='E' ||*ptr=='I' ||*ptr=='O' ||*ptr=='U' ||*ptr=='a' ||*ptr=='e' ||*ptr=='i' ||*ptr=='o' ||*ptr=='u')
            V++;
        else
            C++;
        ptr++;
    }

    printf(" Number of vowels : %d\n Number of consonants : %d\n",V,C-1);
    return 0;
}


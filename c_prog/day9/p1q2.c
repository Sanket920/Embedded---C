/*Uppercase to Lower case: Convert a string from upper case to lowercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. */



#include <stdio.h>

void  upper(char *s)
{
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
}

int main ()
{
    char str[20];

    printf("enter a string: ");
    scanf("%[^'\n']s",str);
   char *str2=str;
    upper(str);
    printf("upper to lower :%s\n", str2);

    return 0;
}

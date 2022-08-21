/*Lower case to Uppercase: Convert a string from lower case to uppercase using pointers. Write a separate function to do the conversion. Do not use intrinsic functions. */



#include <stdio.h>

void  lower(char *s)
{
    for (int i = 0; s[i]; i++)
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] -= 32;
}

int main ()
{
    char str[20];

    printf("enter a string: ");
    scanf("%[^'\n']s",str);
   char *str2=str;
    lower(str);
    printf("lower to upper :%s\n", str2);

    return 0;
}

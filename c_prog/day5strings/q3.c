/*Write a program to convert lower case string to upper case string and vice versa. */

#include <stdio.h>
int main()


{
char str [20]= "Happy Birthday";
int i;
for (i=0;str[i] !=0; i++ )
{
if( str [i]>=65 && str [i]<=90)
	str[i]=str[i]+32;
else if (str[i]>='a' && str[i]<='z')
	str[i]=str[i]-32;

}
printf("%s\n",str );

return 0;
}

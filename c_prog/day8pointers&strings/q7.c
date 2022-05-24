
/* Implement string library functions strlen, strcpy, strcat, strcmp with same return values and all error handling features using pointers.  */




#include <stdio.h>
#include <string.h>
int length( char*);
char copy(char *, char *);
char concat(char *, char*);
int compare(char*, char *);
int main()
{
	char str1[100],str2[100];
	char cpy[100];
	int len,cmp;
	printf("Enter a first string  :");                    
	gets(str1);
	printf("Enter a second string :");                     
	gets(str2);
	len=length(str1);                                               
	printf("Length of a string (%s) is    :%d\n",str1,len);
        cmp=compare(str1,str2);                                         
        printf("comparison of two strings (%s and %s) is    :%d\n",str1,str2,cmp);
	concat(str1,str2);                                              
	printf("Concatenation of two strings is :%s\n",str1);
	copy(cpy,str2);                                                  
        printf("Copy of string is               :%s\n",cpy);
	return 0;
}
int length(char *s1)                               
{
     int l=0;
     while(*s1!='\0')
     {
           l++;
           s1++;
     }
      return l;
}

char concat(char *s1, char *s2)                  
{
	while(*s1!='\0')
		s1++;
     	while(*s2!='\0')
     	{
		*s1=*s2;
             	s1++;
             	s2++;
     	}
      	*s1='\0';
	return *s1;	
}

char copy(char *s1, char *s2)                   
{ 
	while(*s2 !='\0')
	{
		*s1=*s2;
		s1++;
		s2++;
	}
	*s1='\0';
	return *s1;
}

int compare(char *s1, char *s2)                
{
	int cmp=0;  
   	 while(*s1 &&*s2 !='\0')
	 {
		 if(*s1!=*s2)
		 {
			 cmp=1;
		 }  
        s1++;  
        s2++;
	 }
	 if(cmp==0)
		 return 0;
	 else
		 return *s1-*s2;

}



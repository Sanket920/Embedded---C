/*Write a program to read the Roll No, name and marks of a student and store it in to a binary file and read student records and print on standard output (use fwrite and fread library functions).*/



#include <stdio.h>
struct s
{
char name [50];
int roll_no;
int marks;
};
int main()
{
struct s a,b;
    	FILE *fptr;
    	int i;
    	fptr=fopen("file.txt","wb");
    	for (i=0;i<5;++i)
    	 {
    		printf("Enter name: \n");
    		scanf("%s",a.name);
    		printf("Enter roll_no : \n");
    		scanf("%d",&a.roll_no);
    		printf("Enter marks : \n");
    		scanf("%d",&a.marks);
    		fwrite(&a,sizeof(a),1,fptr);
    		}
    		fclose(fptr);
    		fptr=fopen("file.txt","rb");
    		while(1)
    		{
    		if(fread(&b,sizeof(b),1,fptr)==1)
    		printf("name : %s \n roll_no : %d \n marks:%d \n",b.name ,b.roll_no,b.marks);
    		else 
    		break;
    		}
    		fclose(fptr);
    		}

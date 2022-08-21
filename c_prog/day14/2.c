/*     2. Write a program to read (from standard input) the Roll No, name and marks of a student and store it in a text file (Note: Provide text file name through command line).
If the file already exists, add information to it.*/
#include <stdio.h>
#include<stdlib.h>
int main()
{
    	char name[50];
    	int marks,i,n,roll_no;
    	printf("Enter number of students: ");
    	scanf("%d",&n);
    	FILE *fptr;
    	fptr=(fopen("student.txt","a"));
    	if(fptr==NULL) {
    		printf("Error!");
    		exit(1);
    	}
    	for (i=0;i<n;++i) {
    		printf("For student%d\nEnter name: ",i+1);
    		scanf("%s",name);
                printf("Enter roll no: ");
                scanf("%d",&roll_no);
    		printf("Enter marks: ");
    		scanf("%d",&marks);
    		fprintf(fptr,"\nName: %s \nRoll no=%d \nMarks=%d \n ",name,roll_no,marks);
    	}
    	fclose(fptr);
    	return 0;
}


/*    1. Write a program to read the Roll No, name and marks of a student and store it in a text file.
If the file already exists, add information to it.*/



    #include <stdio.h>
    int main() {
    	char name[50];
    	int marks,i,n;
    	printf("Enter number of students: ");
    	scanf("%d",&n);
    	FILE *fptr;
    	fptr=(fopen("C:\\student.txt","a"));
    	if(fptr==NULL) {
    		printf("Error!");
    		exit(1);
    	}
    	for (i=0;i<n;++i) {
    		printf("For student%d\nEnter name: ",i+1);
    		scanf("%s",name);
    		printf("Enter marks: ");
    		scanf("%d",&marks);
    		fprintf(fptr,"\nName: %s \nMarks=%d \n",name,marks);
    	}
    	fclose(fptr);
    	return 0;
    }

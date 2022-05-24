/*Write a C program to print all elements of two dimensional array using pointers.*/



#include<stdio.h>

int main()

{
  int i=0;

  char name[5][10]={"cdacS1","cdacS2","cdacS3","cdacS4","cdacs5"};
  char(*ptr)[5][10]=NULL;

  ptr=&name;

  for(i=0;i<5;i++)
  {
    printf("%s\n",(*ptr)[i]);
  }
   return 0;

}

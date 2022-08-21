/*Write a C program to demonstrate double pointer.*/



#include<stdio.h>
int
main (void)
{

  char *ptr = NULL;
  char **dptr = NULL;
  int i=10;
  ptr=&i;
  char ch='A';
  ptr = &ch;
  dptr = &ptr;
  printf ("\n ch = [%c]\n", ch);
  printf ("\n *ptr = [%c]\n", *ptr);
  printf ("\n **dptr = [%c]\n", **dptr);
  printf ("\n i = [%d]\n", i);
  printf ("\n *ptr = [%d]\n", *ptr);
  printf ("\n **dptr = [%d]\n", **dptr);
  printf ("\n i = [%d]\n", i);

  return 0;
}



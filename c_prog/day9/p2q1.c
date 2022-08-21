/*1. A C program contains the following declaration 

float table[2][3] = { { 1.1,1.2,1.3},{2.1,2.2,2.3}}; 
a) What is the meaning of a table? 
b) What is the meaning of (table+1)? 
c) What is the meaning of *(table+1)? 
d) What is the meaning of (*(table+1)+1)? 
e) What is the meaning of (*(table)+1)? 
f) What is the value of *(*(table+1) +1)? 
g) What is the value of *(*(table)+1)? 
h) What is the value of *(*(table+1)? 
i) What is the value of *(*(table) + 1)+1? 
*/


#include<stdio.h>
int main()
{
float table [2][3]={{1.1,1.2,1.3},{2.1,2.2,2.3}};
printf("size of table=%ld\n",sizeof(table));
printf("\n%p%p%p",&table,&table[0][0],&table[0]);
printf("\n%p%p%p",(table+1),&table[0][0],&table[0]);
printf("\n%p%p%p",&*(table+1),&table[1][0],&table[0]);
printf("\n%p%p%p",&*(table+1)+1,&table[1][1],&table[0]);
printf("\n%p%p%p",(*(table) +1),&table[0][1],&table[0]);
//printf("\n%p%p%p",&*(*(table +1)+1),&table[0][0],&table[0]);
//printf("\n%p%p%p",&*(*(table )+1),&table[0][0],&table[0]);
//printf("\n%p%p%p",&*(*(table +1)),&table[0][0],&table[0]);
//printf("\n%p%p%p",&*(*(table) +1) + 1?,&table[0][0],&table[0]);

return 0;
}

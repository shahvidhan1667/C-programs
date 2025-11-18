#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char l[30];

clrscr();
printf("Enter string in lower case:");
scanf("%s",l);

printf("\n%s",strupr(l));
getch();
}
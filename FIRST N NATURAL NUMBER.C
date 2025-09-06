#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
clrscr();
printf("Enter how many number you wanted to be printed:");
scanf("%d",&n);
for(i=1;i<=n;i++)
printf("\n%d",i);
getch();
}
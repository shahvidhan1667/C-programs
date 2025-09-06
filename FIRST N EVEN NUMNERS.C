#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter how many even numbers to be printed:");
scanf("%d",&n);
for(i=2;i<=n*2;i+=2)
{
printf("\n%d",i);
}
getch();
}
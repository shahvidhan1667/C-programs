#include<stdio.h>
#include<conio.h>
void main()
{
int i,n;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<=100;i++)
{
if(n%i==0)
{
printf("\n%d",i);
}
}
getch();
}
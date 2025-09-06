#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter how many numbers to be calculated:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\n%d",i);
}
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("\n%d",s);

getch();
}
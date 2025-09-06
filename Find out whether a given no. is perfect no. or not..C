#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a=0;
clrscr();
printf("Enter a number:");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
a=a+i;
}
}
if(a==n)
{
printf("Perfect");
}
else
{
printf("Not perfect");
}
getch();
}
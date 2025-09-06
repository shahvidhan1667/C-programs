#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=1;
clrscr();
for(i=5;i>=1;i--)
{
printf("\n%d",i);
}
for(i=5;i>=1;i--)
{
s=s*i;
}
printf("\n%d",s);

getch();
}
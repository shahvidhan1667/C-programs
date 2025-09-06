#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
for(i=13;i<=100;i+=13)
{

printf("\n%d",i);
s=s+i;
}
printf("\nSum=%d",s);

getch();
}
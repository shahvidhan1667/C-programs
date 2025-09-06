#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
clrscr();
printf("Enter how many even numbers to be calculated:");
scanf("%d",&n);
for(i=2;i<=n*2;i+=2)
{
printf("\n%d",i);
}
for(i=2;i<=n*2;i+=2)
{
s=s+i;
}
printf("\nsum:%d",s);

getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int s,l,a,b,i;
clrscr();
printf("Enter number:");
scanf("%d",&a);
l=a;
s=a;
for(i=2;i<=10;i++)
{
printf("\nEnter number:");
scanf("%d",&a);
if(a>l)
{
l=a;
}
if(s>a)
{
s=a;
}
}
printf("\nLargest number:%d & smallest number:%d",l,s);
getch();
}
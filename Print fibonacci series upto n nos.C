#include<stdio.h>
#include<conio.h>
void main()
{
 int b=1,a=1,i,n;
clrscr();
printf("Enter how many number to be printed:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf(",%d",a);
printf(",%d",b);
a=a+b;
b=a+b;
}
getch();
}
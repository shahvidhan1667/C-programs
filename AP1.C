#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i;
clrscr();
for(i=0;i<=4;i++)
{
printf("Enter value of array:");
scanf("%d",&a[i]);
}
for(i=0;i<5;i++)
{
printf("\n%d",a[i]);
}
getch();
}
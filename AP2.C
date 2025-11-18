#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i;
clrscr();
for(i=0;i<=9;i++)
{
printf("Enter value of array:");
scanf("%d",&a[i]);
}
printf("\n%d %d %d",a[3],a[6],a[8]);

getch();
}
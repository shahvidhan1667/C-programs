#include<stdio.h>
#include<conio.h>
void main()
{
int g,a,d,n;
clrscr();
printf("Enter value of gross sales:");
scanf("%d",&g);
d=1*g/10;
n=g-d;
printf("\nValue of net sales will be:%d",n);
getch();
}
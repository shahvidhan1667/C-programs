#include<stdio.h>
#include<conio.h>
void main()
{
int g,a,d,n;
clrscr();
printf("Enter value of gross salary:");
scanf("%d",&g);
a=1*g/10;
d=3*g/100;
n=g+a-d;
printf("\nValue of net salary will be:%d",n);
getch();
}
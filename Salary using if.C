#include<stdio.h>
#include<conio.h>
void main()
{
int n,g,a,d;
clrscr();
printf("Enter your gross salary:");
scanf("%d",&g);
if(g>10000)
{
a=g/10;
d=3*g/100;
n=g+a-d;
printf("Net salary will be:%d",n);
}
else
{
a=7*g/100;
d=2*g/100;
n=g+a-d;
printf("Net salary will be:%d",n);
}
getch();
}

#include<stdio.h>
#include<conio.h>
void main()
{
int n,g,a,d;
clrscr();
printf("Enter your gross sales:");
scanf("%d",&g);
if(g>20000)
{
d=15*g/100;
n=g-d;
printf("Net sales will be:%d",n);
}
else if(g>10000)
{
d=10*g/100;
n=g-d;
printf("Net sales will be:%d",n);
}
else
{
d=5*g/100;
n=g-d;
printf("Net sales will be:%d",n);
}
getch();
}

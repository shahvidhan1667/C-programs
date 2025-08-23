#include<stdio.h>
#include<conio.h>
void main()
{
int p,c,m,t,a;
clrscr();
printf("Enter marks of physics:");
scanf("%d",&p);
printf("Enter marks of chemistry:");
scanf("%d",&c);
printf("Enter marks of maths:");
scanf("%d",&m);
t=p+c+m;
a=t*100/300;
printf("\nValue of total marks will be:%d",t);
printf("\nValue of avg marks will be:%d",a);
getch();
}
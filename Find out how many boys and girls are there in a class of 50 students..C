#include<stdio.h>
#include<conio.h>
void main()
{
int m=0,f=0,i;
char g;
clrscr();
for(i=1;i<=5;i++)
{
printf("Enter your gender[f/m]");
scanf(" %c",&g);

if(g=='m')
{
m++;
}
else
{
f++;
}
}
printf("\nTotal males:%d",m);
printf("\nTotal females:%d",f);

getch();
}
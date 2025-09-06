#include<stdio.h>
#include<conio.h>
void main()
{
long int i,b,a,t=0;
clrscr();
for(a=2;a<=500;a++)
{
b=0;
for(i=2;i<=a/2;i++)
{
if(a%i==0)
{
b=1;
}
}
if(b==0)
{

printf("\t%d",a);
t++;
}
}
printf("\nTotal prime number:%d",t);
getch();
}
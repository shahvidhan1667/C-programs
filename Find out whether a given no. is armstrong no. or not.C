#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,c,d,e1,e2,e3,t;
clrscr();
printf("Enter a 3 digit number:");
scanf("%d",&n);
a=n/100;
c=n%10;
b=n/10;
d=b%10;
printf("\n%d,%d,%d",c,d,a);
e1=a*a*a;
e2=d*d*d;
e3=c*c*c;
t=e1+e2+e3;
if(t==n)
{
printf("\nArmstrong number");
}
else
{
printf("\nNot an armstrong number");
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int i,p,r,n;
clrscr();
printf("Enter value of principal amount:");
scanf("%d",&p);
printf("Enter value of intrest rate:");
scanf("%d",&r);
printf("Enter value of time period:");
scanf("%d",&n);

i=p*r*n/100;
printf("Value of intrest will be:%d",i);
getch();
}
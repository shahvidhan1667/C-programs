#include<stdio.h>
#include<conio.h>
void main()
{
int n;
clrscr();
printf("Enter Number:");
scanf("%d",&n);
if(n%7==0)
{
printf("Number is divisible by 7");
}
else
{
printf("Number is not divisible by 7");
}
getch();
}

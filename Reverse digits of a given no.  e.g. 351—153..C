#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,a,b,c,d;
clrscr();
printf("Enter a 3 digit number:");
scanf("%d",&n);
a=n/100;
c=n%10;
b=n/10;
d=b%10;
printf("\n%d",c);
printf("%d",d);
printf("%d",a);
getch();
}
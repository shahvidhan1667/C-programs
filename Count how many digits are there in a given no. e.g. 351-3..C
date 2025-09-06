#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,c,n=0;
clrscr();
printf("Enter number:");
scanf("%d",&a);
for(c=a;a!=0;)
{
b=b*10+a%10;
a=a/10;
n++;
}
printf("%d",n);
getch();
}
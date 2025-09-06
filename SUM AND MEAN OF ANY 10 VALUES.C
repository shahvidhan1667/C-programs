#include<stdio.h>
#include<conio.h>
void main()
{
float i,n,s=0,m;


clrscr();
for(i=0;i<=9;i+=1)
{
printf("Enter number:");
scanf("%f",&n);
s=s+n;
m=s/10;
}
printf("\nSum=%f",s);
printf("\nMean=%f",m);
getch();
}
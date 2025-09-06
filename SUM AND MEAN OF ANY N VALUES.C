#include<stdio.h>
#include<conio.h>
void main()
{
float i,n,s=0,m,no;
clrscr();
printf("How many values you want to enter:");
scanf("%f",&n);
for(i=1;i<=n;i+=1)
{
printf("Enter number:");
scanf("%f",&no);
s=s+no;
m=s/n;
}
printf("\nSum=%f",s);
printf("\nMean=%f",m);
getch();
}
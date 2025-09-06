#include<stdio.h>
#include<conio.h>
void main()
{
int n=0,p=0,i,z=0,no;
clrscr();
for(i=1;i<=10;i++)
{
printf("Enter your number:");
scanf("%d",&no);

if(no==0)
{
z++;
}
else if(no>0)
{
p++;
}
else
{
n++;
}
}
printf("\npositives:%d",p);
printf("\nnegative:%d",n);
printf("\nZero:%d",z);

getch();
}
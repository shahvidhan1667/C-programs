#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j;
clrscr();
printf("Enter range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=2;j<i;j++)
{

if(i%j==0)

break;

}
if(j==i)
printf("\t%d",i);
}


getch();
}
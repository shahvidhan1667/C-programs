#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();
for(i=1;i<=2;i++)
{

for(j=1;j<=2;j++)
{
for(k=1;k<=2;k++)
{
printf("\n%d%d%d",i,j,k);
}
}
printf("\n");
}
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2],b[2][2],c[2][2],i,j;
clrscr();
for(i=0;i<=1;i++)
{
   for(j=0;j<=1;j++)
   {

       printf("Enter value of a:");
       scanf("%d",&a[i][j]);
   }
}
for(i=0;i<=1;i++)
{
   for(j=0;j<=1;j++)
   {

       printf("Enter value of b:");
       scanf("%d",&b[i][j]);
   }
}
for(i=0;i<=1;i++)
{
   for(j=0;j<=1;j++)
   {

       printf("\n value of c:%d",a[i][j]+b[i][j]);
   }
}

getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a[4][4],i,j;
clrscr();
for(i=0;i<=3;i++)
{
   for(j=0;j<=3;j++)
   {

       printf("Enter value of a:");
       scanf("%d",&a[i][j]);
   }
}
for(j=0;j<=3;j++)
{
   for(i=0;i<=3;i++)
   {

       printf("\nValue of a:%d",a[i][j]);

   }
}

getch();
}
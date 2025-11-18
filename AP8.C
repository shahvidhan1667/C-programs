#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],i,b[10];
clrscr();
for(i=0;i<=4;i++)
{

       printf("Enter value of a:");
       scanf("%d",&a[i]);

}
for(i=4;i>=1;i--)
{

       printf("\n%d",a[i]);

}
getch();
}
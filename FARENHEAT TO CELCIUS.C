#include<stdio.h>
#include<conio.h>
void main()
{
int c,f;
clrscr();
printf("Enter value in farenheat:");
scanf("%d",&f);
c=(f-32)*5/9;
printf("Value in Farenheat will be:%d",c);
getch();
}
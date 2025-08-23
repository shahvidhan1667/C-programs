#include<stdio.h>
#include<conio.h>
void main()
{
int c,f;
clrscr();
printf("Enter value of celcius:");
scanf("%d",&c);
f=9*c/5+32;
printf("Value in Farenheat will be:%d",f);
getch();
}
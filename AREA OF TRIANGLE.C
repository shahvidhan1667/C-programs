#include<stdio.h>
#include<conio.h>
void main()
{
int l,a,h;
clrscr();
printf("Enter value of height:");
scanf("%d",&h);
printf("Enter value of length:");
scanf("%d",&l);
a=h*l/2;
printf("\nValue of area of rectangle will be:%d",a);
getch();
}
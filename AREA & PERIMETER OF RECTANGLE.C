#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,p,l;
clrscr();
printf("Enter value of length:");
scanf("%d",&l);
printf("Enter value of breadth:");
scanf("%d",&b);
a=l*b;
p=(l+b)*2;
printf("\nValue of area of rectangle will be:%d",a);
printf("\nValue of perimeter of rectangle will be:%d",p);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 1st value:");
scanf("%d",&a);
printf("Enter 2nd value:");
scanf("%d",&b);
printf("\noriginal value a=%d b=%d",a,b);
c=a;
a=b;
b=c;

printf("\nSwapped values are a=%d b=%d",a,b);


getch();
}
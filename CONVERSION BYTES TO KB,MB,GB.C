#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("Enter value of bytes:");
scanf("%d",&a);
b=a/1000;
printf("Value in kb will be:%d",b);
c=a/1000000;
printf("Value in mb will be:%d",c);
d=a/1000000000;
printf("Value in kb will be:%d",d);

getch();
}
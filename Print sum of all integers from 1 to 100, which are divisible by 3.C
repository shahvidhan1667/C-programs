#include<stdio.h>
#include<conio.h>
void main()
{
int i,s=0;
clrscr();
for(i=3;i<=100;i+=3)
{
printf("\n%d",i);
s=s+i;
}
printf("\nSum will be:%d",s);
getch();
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
clrscr();
printf("Enter your avg marks of 3 subjects:");
scanf("%d",&a);
if(a>=70)
{
printf("Distinction");
}
else if(a>=60)
{
printf("First");
}
else if(a>=50)
{
printf("Second");
}
else if(a>=35)
{
printf("Third class");
}
else
{
printf("Fail");
}
getch();
}

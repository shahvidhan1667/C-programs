#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c;
clrscr();
printf("Enter 3  values");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c)
{
if(c>b)
{
printf("Bigger number is %d",a);
printf("\nsmaller number is %d",b);
}
else
{
printf("Bigger number is %d",a);
printf("\nsmaller number is %d",c);
}
}
if(b>a && b>c)
{
if(a>c)
{
printf("Bigger number is %d",b);
printf("\nsmaller number is %d",c);
}
else
{
printf("Bigger number is %d",b);
printf("\nsmaller number is %d",a);
}
}
if(c>b && a<c)
{
if(a>b)
{
printf("Bigger number is %d",c);
printf("\nsmaller number is %d",b);
}
else
{
printf("Bigger number is %d",c);
printf("\nsmaller number is %d",a);
}
}
getch();
}
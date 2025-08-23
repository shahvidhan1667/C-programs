#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
printf("Enter 2 values");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("Bigger number is %d",a);
printf("\nsmaller number is %d",b);

}
else
{
printf("bigger number is %d",b);
printf("\nsmaller number is %d",a);

}
getch();
}
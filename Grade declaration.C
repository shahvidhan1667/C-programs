#include<stdio.h>
#include<conio.h>
void main()
{
int a,p,c,m;
clrscr();
printf("Enter your marks of 3 subjects:");
scanf("%d %d %d",&p,&c,&m);
a=p+c+m;
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
else if(p<35 || c<35|| m<35)
{
printf("Fail");
}
else
{
printf("Fail");
}
getch();
}


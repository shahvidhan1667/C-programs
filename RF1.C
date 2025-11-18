#include<stdio.h>
#include<conio.h>
void main()
{
int sumofno(int);
clrscr();
printf("%d",sumofno(10));
getch();
}
int sumofno(int n)
{
if(n==0)
return 0;
else
return(n+sumofno(n-1));
}

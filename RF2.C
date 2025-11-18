#include<stdio.h>
#include<conio.h>
void main()
{
int facofno(int);
clrscr();
printf("%d",facofno(5));
getch();
}
int facofno(int n)
{
if(n==0)
return 1;
else
return(n*facofno(n-1));
}

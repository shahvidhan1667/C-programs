#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,n1,n2,n3,n4,n5,n6,n7,n8;
clrscr();
printf("Enter value:");
scanf("%d",&n);
printf("Note of 500 required:%d",n/500);
n1=n%500;
printf("\nNote of 200 required:%d",n1/200);
n2=n1%200;
printf("\nNote of 100 required:%d",n2/100);
n3=n2%100;
printf("\nNote of 50 required:%d",n3/50);
n4=n3%50;
printf("\nNote of 20 required:%d",n4/20);
n5=n4%20;
printf("\nNote of 10 required:%d",n5/10);
n6=n5%10;
printf("\nNote of 5 required:%d",n6/5);
n7=n6%5;
printf("\nNote of 2 required:%d",n7/2);
n8=n7%2;
printf("\nNote of 1 required:%d",n8/1);


getch();
}


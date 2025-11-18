#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct book
{
char title[20];
char author[20];
int edition;
char isbn[14];
char publisher[20];
float price;

};
void display(struct book);
void display_price(float,char*);
int main()
{
struct book b1,b2;
struct book b3={"LET US C","YK",4,"81-7656-940-2","BPB",180};
//clrscr();

printf("Title:%s\n",b3.title);
printf("Author:%s\n",b3.author);
printf("Edition:%d\n",b3.edition);
printf("ISBN:%s\n",b3.isbn);
printf("Publisher:%s\n",b3.publisher);
printf("Price:%f\n",b3.price);



b1=b3;
display(b1);

printf("Enter information for b2 object\n");
printf("Enter a book name:");
gets(b2.title);
printf("Enter a book author:");
gets(b2.author);
printf("Enter a book edition:");
scanf("%d",&b2.edition);
printf("Enter a book isbn:");
flushall;
gets(b2.isbn);
printf("Enter a book publisher:");
gets(b2.publisher);
printf("Enter a book price:");
scanf("%f",&b2.price);

printf("The content of object b2 is...\n");
display(b2);


display_price(b1.price,"Book 1");
display_price(b2.price,"Book 2");
display_price(b3.price,"Book 3");

getch();
};

void display(struct book b)
{
printf("Title:%s\n",b.title);
printf("Author:%s\n",b.author);
printf("Edition:%d\n",b.edition);
printf("ISBN:%s\n",b.isbn);
printf("Publisher:%s\n",b.publisher);
printf("Price:%2f\n",b.price);
}

void display_price(float cost,char*message)
{
printf("%s\'s cost is %2f\n",message,cost);
}






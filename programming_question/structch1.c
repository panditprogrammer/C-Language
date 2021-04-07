#include <stdio.h>
#include <stdlib.h>
//creating a structure and structure function
struct book
{
    int bookid;
    char title[20];
    float price;
};

struct book input()
{
    struct book b;
    printf("Enter bookid title and price");
    scanf("%d",&b.bookid);
    fflush(stdin);
    gets(b.title);
    scanf("%f",&b.price);
    return b;
};
//this is struct type function

void display(struct book b)
{
    printf("Bookid title and price is ");
    printf("\n %d %s %.2f \n",b.bookid,b.title,b.price );

}
void main()
{
    system("cls");
    struct book b1;
    b1=input();
    display(b1);
    system("pause");
}

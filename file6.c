//writing in a file using fwrite function
#include <stdio.h>

struct book{
int bookid;
char title[20];
float price;
};
int main( ){

    FILE *fp;
    struct book book1;

    fp=fopen("myfile.dat","ab");

    printf("Enter bookid title and price");
    scanf("%d",&book1.bookid);
    fflush(stdin);
    gets(book1.title);
    fflush(stdin);
    scanf("%f",&book1.price);

    fwrite(&book1,sizeof(book1),1,fp);

    fclose(fp);
    printf("book info written successfully");


}

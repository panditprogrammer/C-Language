// reading data from a file using fread function
#include <stdio.h>
struct book{
int bookid;
char title[20];
float price;
};
int main()
{
    struct book book1;

    FILE *fp;

    fp = fopen("myfile.dat","rb");
    if(fp==NULL){
        printf("file not found");
        exit(1);
        }
//what is return from fread function

    while(fread(&book1,sizeof(book1),1,fp)>0){
                printf("%d %s %f",book1.bookid,book1.title,book1.price);

    }

    fclose(fp);


}

// fscanf( ) function is used to take input from file
#include <stdio.h>
#include <stdlib.h>
//Write a program to read content  from a file and display on the screen. use fscanf( ) to read content from a file
int main()
{
    int a,b,c;
    FILE *fp;

    fp=fopen("f1.txt","r");

    if(fp==NULL){
        printf("file not found");
    }
    fscanf(fp," %d,%d,%d",&a,&b,&c);

    printf("a=%d,b=%d,c=%d",a,b,c);
    fclose(fp);

}

//writing a string using fputs function that is declared in stdio.h header file
#include <stdio.h>
int main()
{
    char str[40];

    FILE  *fp;
    fp=fopen("file1.txt","a");

    if(fp==NULL){
        printf("file not found");
    }

    printf("Enter your name ");
    gets(str);
    fputs(str,fp);
    fclose(fp);
    printf("successfully written in file \n");
}

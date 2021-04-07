#include <stdio.h>
int main()
{
    char str[200];
    FILE *fp;

    fp=fopen("file1.txt","w");
    if(fp==NULL){
        printf("file not found");
    }

    printf("Enter string ");
    gets(str);
    fputs(str,fp);
    fclose(fp);

}

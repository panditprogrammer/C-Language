#include <stdio.h>
#include <string.h>

int main(  )
{
    int i;
    char s[500];

    system("cls");

    FILE *fp;
    fp = fopen("file1.txt","w");
    if(fp==NULL)
        {
        printf("File cannot open");
        exit(1);
            }
    printf("Enter string for writting in file ");
    gets(s);

    for(i=0;i<strlen(s);i ++)
        fputc(s[i],fp);
    fclose(fp);

    system("pause");
}

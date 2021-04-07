#include <stdio.h>
//creating a program to reading a file from hard sisk
int main(  )
{
    char ch[20];
      FILE *fp;
   fp = fopen("file1.txt","r");
    if (fp==NULL)
    {
        printf("file not found !");
        exit(1);
    }
    /*ch =fgetc(fp);
    while (!feof(fp)){
        printf("%c",ch);
        ch=fgetc(fp);
    }
    */
    while(fgets(ch,5,fp)){
        printf("%s",ch);
    }

    fclose(fp);

}

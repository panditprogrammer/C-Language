//reading  string from a file using fgets  function in c language
#include <stdio.h>

int main()
{
    char str[200];
    FILE *fp;

    fp= fopen("file1.txt","r");
    if(fp==NULL){
        printf("file not found");
    }

    while(fgets(str,4,fp)!=NULL){
        printf("%s",str);
    }
    fclose(fp);
}

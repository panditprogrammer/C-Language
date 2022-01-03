//counting character , line and words in a file
#include <stdio.h>
#include <stdlib.h>

void main()
{
    char c,filename[]="filecontainervariables";
    int word=0,line=0,character=0;
    system("cls");
    FILE *fileAddress;
    printf("===counting number of characters ,words and lines in a file===\n ");
    printf("\nEnter file name with extension ");
    scanf("%s",filename);

    fileAddress = fopen(filename,"r");

    if(fileAddress == NULL)
        printf("file not fount\n");
    else
    {
        while((c = fgetc(fileAddress)) != EOF)
        {
            if(c == ' ')
                word++;
            if(c== '\n')
                line++;
            character++;
        }
        printf("\n'%s' file contains \n",filename);
        printf("\nNumber of words %d",word);
        printf("\nNumber of line %d",line+1);
        printf("\nNumber of Character %d\n",character);
    }
    fclose(fileAddress);

    system("pause");
}

//remove extra spaces in given string
#include <stdio.h>
#include <string.h>
char * removeExtraSpace(char *s);
void main()
{
    char str[200];
    system("cls");
    printf("Enter string ");
    gets(str);
    printf(str);
    printf("\n string length %d \n",strlen(str));
    strcpy(str,removeExtraSpace(str));
    printf("string length %d \n",strlen(str));
    printf(str);
    system("pause");

}

char * removeExtraSpace(char *s)
{
    char *p;
    int i=0,j=0;
    p=malloc(strlen(s)+1);
    while(*(s+i)){
        while (*(s+i) == ' '){
            i++;
        }
        while(*(s+i) != ' ' && *(s+i) != '\0'){
            *(p+j) =*(s+i);
            i++;
            j++;
        }
        if(*(s+i)== '\0' && (p+j-1) == ' ')
          {
                j--;
        *(p+j) = *(s+i);
        j++;
          }
    }
    return (p);

}

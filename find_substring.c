// finding substring in a given string
#include <stdio.h>
void main()
{
    char str[200],s[50];
    int index;
    system("cls");
    printf(" =====finding substring in string====\n ");
    printf("\n Enter string ");
    gets(str);
    printf("\n Enter substring ");
    gets(s);
    index = index_of_substr(str,s);
    if(index== -1){
        printf("string not found\n ");
    }
    else{
        printf("string found at index %d\n ",index);
    }
}

int index_of_substr(char str[],char s[])
{
    int i,j,k,l;
    l= strlen(s);
    for(i=-0;str[i+l-1];i++){

        k=i;
        for(j=0;j<=l-1;j++){
                if(str[k] !=s[j])
                break;
        k++;

        }
        if(j==l)
            return (i);
    }
    return (-1);
}

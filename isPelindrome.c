//Program to check whether a string is palindrome or not
#include <stdio.h>

void main()
{
    char str[20];
    int i,j,c=0;
    system("cls");
    printf("Enter string ");
    //aasaa
    gets(str);
    //calculate length of string
    for (i=0;str[i];i++);
    //checking string index
    for(j=0;j<i/2;j++){
            if(str[j] == str[i-1-j]){
                    c++;
            }
        }

    if(c == i/2){
        printf("pelindrome\n");
    }
    else{
        printf("Not pelindrome\n");
    }
    system("pause");
}


//program to  Capitalized first letter of single string
#include <stdio.h>
void main()
{
    char s[40];
    int i;
    system("cls");
    printf("Enter a string ");
    gets(s);

        if(s[0]>='a'&& s[i]<='z')
                s[0] = s[0] -32;

    puts(s);
    printf("\n");
    system("pause");

}

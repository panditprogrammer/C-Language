//program to covert into uppercase
#include <stdio.h>
void main()
{
    char s[40];
    int i;
    system("cls");
    printf("Enter a string ");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>='a'&& s[i]<='z'){
            s[i] = s[i] -32;

            //printf("%c",s[i]);
        }
        puts(s); //printing string using puts function
        printf("\n");
    system("pause");
}

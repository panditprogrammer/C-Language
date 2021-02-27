//program to  convert into lowercase
#include <stdio.h>
void main()
{
    char s[40];
    int i;
    system("cls");
    printf("Enter a string ");
    gets(s);
    for(i=0;s[i];i++)
        if(s[i]>='A'&& s[i]<='Z'){
            s[i] = s[i] +32;
        }
        puts(s);
        printf("\n");
    system("pause");
}

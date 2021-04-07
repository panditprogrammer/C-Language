
#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i;
    char s[3][200];
    system("cls");
    printf("Enter three lines \n");
    for (i=0;i<=2;i++)
        gets(s[i]);

    for (i=0;i<=2;i++)
        printf("%s\n \n",s[i]);



    system("pause");
}


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
    char ch[200]={"panditprogrammer.com" };

    system("cls");

    printf("%s\n",ch);
    puts(ch);
    gets(ch);
    puts(strrev(ch));

    system("pause");

}

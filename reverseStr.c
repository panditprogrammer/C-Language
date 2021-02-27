//program to reverse a string using built in function

#include <stdio.h>
void main()
{
    char s[40];
    system("cls");
    printf("Enter your name ");
    gets(s);
    strrev(s);
    printf("After reversed %s \n",s);

    system("pause");

}

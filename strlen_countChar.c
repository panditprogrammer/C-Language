//program to count character in string
//program to calculate length of string
#include <stdio.h>
void main()
{
    char a[30];
    int i;
    system("cls");
    printf("Enter string ");
    gets(a);

    for(i=0;a[i];i++);
    printf("Total character/or string length is %d\n",i);
    system("pause");
}

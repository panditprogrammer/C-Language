#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char * reversed(char *p)
{
    int l,i;
    char ch;
    for (l=0;*(p+l)!= '\0';l++);
    for (i=0;i<l/2;i++)
    {
        ch=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=ch;
    }
    return (p);

}
void main(void)
{
    char str1[200]={"panditprogrammer.com"};

    system("cls");
    printf("%s",reversed("pandit"));


    strrev(str1 );
    printf("%s",str1);

    system("pause");
}

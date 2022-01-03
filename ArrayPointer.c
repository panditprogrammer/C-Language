//array of pointer

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    //we can save more memory and efforts using array of pointer
    char *books[] = {"2 story books","2 love stroy books","2 programming books" };
    system("cls");
    //accessing the array pointer
        printf("%s and  %s is here \n",books[1],books[2]);


    system("pause");
}

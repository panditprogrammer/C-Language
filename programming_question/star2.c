#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,j;
    system("cls");
    for(i=1;i<=10;i++)
{       for(j=i;j<=10-i;j++)
        printf("*");
    printf("\n");
}
    system("pause");
}
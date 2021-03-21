//program to print table of any number
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i;
    system("cls");
    printf("Enter a number to get table ");
    scanf("%d",&n);
    for(i=1;i<11;i++)
    {
        printf("%d X  %d = %d\n",i,n,i*n);

    }
    printf("\n");
    system("pause");
}
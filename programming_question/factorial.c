//program to find factorial of a number
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i,fact=1;
    system("cls");
    printf("Enter a number to find factorial ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact = fact* i;
    }
        printf("%d ",fact);
    system("pause");
}
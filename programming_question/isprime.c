//program to find whether given number is prime or not
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,i;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
         break;
    
    }
    if(i==n)
        printf("Prime\n");
    else
        printf(" Not prime\n");

    system("pause");
}
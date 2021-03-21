//program to find whether a given number is even or odd
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    if(n%2==0)
    printf("Even number \n");
    else
    printf("Odd number\n");
    system("pause");
}
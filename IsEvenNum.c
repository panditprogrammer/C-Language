//program to check a number whether it is even or odd
//without using % operator
#include <stdio.h>
void main()
{
    int n;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    if(n&1) //binary and operator
        printf("Odd number \n");
    else
        printf("Even number \n");

    system("pause");

}

//C Program to check even or odd without modulus and bitwise operator

#include <stdio.h>

void main()
{
    int x,a;
    system("cls");
    printf("Enter a number : ");
    scanf("%d",&a);
    if(a== (a/2)*2)
        printf("Even Number");
    else
        printf("odd Number");


}

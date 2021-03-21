//program to show the uses of conditional operator
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int a,b;
    system("cls");
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    int result = a<b?a:b;
    printf("%d is smaller \n",result);
    system("pause");
}
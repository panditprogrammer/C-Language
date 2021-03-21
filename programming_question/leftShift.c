//program to shift inputed data by 2 bits to the left
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int n,y;
    system("cls");
    printf("Enter number ");
    scanf("%d",&n);
    n <<= 3;
    y=n;
    printf("After left shifting with two bits %d\n",y);
    y>>=3;
    int z=y;
    printf("After right shifting with two bits %d\n",z);
    system("pause");
}
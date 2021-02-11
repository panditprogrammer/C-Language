//Program to calculate product of first N natural numbers
#include <stdio.h>
void main()
{
    int N,p=1,i;
    system("cls");
    printf("Enter a Natural number ");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        p=p*i;

    printf("Product of %d first natural numbers is %d\n",N,p);
    system("pause");
}

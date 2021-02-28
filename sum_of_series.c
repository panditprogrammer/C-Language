//program to sum of series of given number
#include <stdio.h>
void main()
{
    int n,i,j,sum=0,term;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        term = 0;
        for(j=1;j<=i;j++)
            term = term +j;
        sum= sum + term;
    }
    printf("Sum of series of %d is %d \n",n,sum);
    system("pause");
}

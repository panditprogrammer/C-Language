//program to print star pattern 3
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i,j,n;
    system("cls");
    printf("Enter number of rows \n");
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        for(j=1;j<=n+i+1;j++)
            if(j>=n-i&&j<=n-1+i)
                printf("*");
            else
            printf(" ");
    printf("\n");
    }
    system("pause");
}
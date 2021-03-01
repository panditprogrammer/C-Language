//program to print N natural number using recursion
#include <stdio.h>
void main()
{
    int sum,n;
    system("cls");
    printf("Enter number ");
    scanf("%d",&n);
    printf("First %d naturals numbers are\n",n);
    printN(n);
    printf("\n");
    system("pause");
}

void printN(int n)
{
    if(n>=1){
        printN(n-1);
        printf(" %d",n);
        }
    }

//program to print N natural number in reverse order using recursion
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
        printf(" %d",n);
        printN(n-1);
        }
    }

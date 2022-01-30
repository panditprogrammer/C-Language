#include <stdio.h>
#include <stdlib.h>

void main()
{
    int n,fib=0,i,n1=0,n2=1;
    system("cls");
    printf("how many terms you want to print fibbonacci series ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf(" %d",fib);
        n1 = n2;
        n2 = fib;
        fib = n1+n2;

    }
    system("pause");
}

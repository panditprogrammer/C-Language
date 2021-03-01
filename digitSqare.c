//program to sum of square of digits using recursion
#include <stdio.h>
void main()
{
    int sum,n;
    system("cls");
    printf("Enter number ");
    scanf("%d",&n);
    sum = sum_sq(n);
    printf("Sum of square of digit of %d is %d\n",n,sum);
    system("pause");
}

int sum_sq(int a)
{
    if(a/10==0)
        return (a*a);
    return ((a%10 )*(a%10) +sum_sq(a/10));
}

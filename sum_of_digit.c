//program to sum of digit
#include <stdio.h>
int sum_num(int );
void main()
{
    int sum,n;
    system("cls");
    printf("Enter number ");
    scanf("%d",&n);
    sum = sum_num(n);
    printf("sum of digit of %d is %d\n",n,sum);
    system("pause");
}

int sum_num(int a)
{
    if(a/10==0)
        return (a);
    return (a%10+sum_num(a/10));
}

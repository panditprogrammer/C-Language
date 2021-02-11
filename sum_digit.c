//Program to calculate sum of digits of a number
#include <stdio.h>
void main()
{
    int N,s=0,t;
    system("cls");
    printf("Enter number ");
    scanf("%d",&N);
    t=N;
    while(t)
    {
        s=s+(t%10);
        t=t/10;
    }
    printf("Sum of %d is %d\n",N,s);
    system("pause");
}

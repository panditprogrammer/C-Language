//program to find greatest among three numbers
#include <stdlib.h>
#include <stdio.h>
void main()
{
    int n,n1,n2;
    system("cls");
    printf("Enter three numbers ");
    scanf("%d%d%d",&n,&n1,&n2);
    if(n>n1)
    {
        if(n>n2)
        printf("%d is greatest number ",n);
        else
        printf("%d is the greatest number",n2);
    }
    else
    {
        if(n1>n2)
        printf("%d is the greatest number ",n1);
        else
        printf("%d is the greatest number ",n2);
    }
    system("pause");
}
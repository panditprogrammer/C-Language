//program to calculate sum of first natural numbers
#include <stdio.h>
void main()
{
    int n,s,i;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("Sum of first %d natural numbers is %d\n",n,s);
    system("pause");
}

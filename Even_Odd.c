//program to calculate sum of all even and odd numbers
#include <stdio.h>
void main()
{
    int n,e=0,o=0,i;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0)
            e=e+i;
        else
            o=o+i;
    }
    printf("Sum of all Even numbers is %d and all Odd numbers is %d\n",e,o);
    system("pause");
}

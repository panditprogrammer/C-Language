//program to print N terms of Fibonacci series in c
#include <stdio.h>
void main()
{
    int n,i,a=-1,b=1,c;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    system("pause");
}

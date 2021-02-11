//program to calculate factorial of a number
#include <stdio.h>
void main()
{
    int n,f=1,i,t;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    t=n;
    for(i=0;i<n;i++){
        f =f*t;
       t--;
    }
    printf("Factorial of %d is %d\n",n,f);
    system("pause");
}


//program to print table of given number
#include <stdio.h>
void main()
{
    int n,i;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    printf("Table of %d is \n",n);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d",n,i,i*n);
        printf("\n");
    }

    system("pause");
}


//program to find all prime factor of a given number

#include <stdio.h>
void main()
{
    int n,i;
    system("cls");
    printf("Enter a number to find all prime factor ");
    scanf("%d",&n);

    for(i=2;n>1;i++)
    {
        while(n%i==0){

            printf(" %d",i);
            n =n/i;
        }
    }
    printf("\n");

    system("pause");
}

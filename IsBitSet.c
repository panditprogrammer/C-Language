//program to print a number which has two bits set
#include <stdio.h>
void main()
{
    int n,i,j;
    system("cls");
    printf("How many number you want to print which has two bits set? ");
    scanf("%d",&n);

    for(i=2;n;i=i*2)
    {
        for(j=1;j<i;j=j*2)
        {
            printf(" %d",i+j);
            n--;
            if(n==0)
                break;
        }
    }
    printf("\n");
    system("pause");
}

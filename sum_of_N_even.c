//program to calculate sum of first N even natural numbers
#include <stdio.h>

void main()
{
    int N ,i,sum=0;
    system("cls");
    printf("Enter  a Natural number :");
    scanf("%d",&N);
    for (i =1;i<=N*2;i++)
    {
        if(i%2==0){
            sum =sum+i;
//            printf("%d",i);
        }
    }
    printf("\nSum of %d Even natural numbers is %d\n",N,sum);
    system("pause");

}

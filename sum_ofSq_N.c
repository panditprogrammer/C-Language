//Function to calculate sum of squares of N natural numbers

#include <stdio.h>
void main()
{
    int N,i,sum=0;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&N);
    for(i=0;i<=N;i++){
        sum =sum+i*i;
    }
    printf("Sum  of Square of  %d natural numbers is %d\n",N,sum);
    system("pause");
}

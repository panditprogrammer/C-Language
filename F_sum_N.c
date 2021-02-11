//Function to calculate sum of first N natural numbers
#include <stdio.h>
int sum_of_N(int n);
void main()
{
    int N,sum;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&N);
    sum = sum_of_N(N);
    printf("sum of %d natural numbers is %d\n",N,sum);
    system("pause");

}

int sum_of_N(int n)
{
    int i,sum=0;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}

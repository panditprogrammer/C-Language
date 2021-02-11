//program to find sum of first N odd natural numbers
#include <stdio.h>
void main()
{
    int N ,sum;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&N);
    for(int i=1;i <= N*2;i++){
        if(i%2!=0){
                sum=sum+i;
        }
    }
    printf("Sum of %d odd numbers is %d\n",N,sum);
    system("pause");
}

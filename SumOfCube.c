//program to sum of cubes using recursion
#include <stdio.h>
int getSumOfCube(int N);
void main()
{
    int n,sum;
    system("cls");
    printf("Enter a natural number ");
    scanf("%d",&n);
    sum = getSumOfCube(n);
    printf("Sum of cube of first %d natural number is %d\n",n,sum);
    system("pause");

}

int getSumOfCube(int N)
{
    if(N==1)
        return 1;
    return (N*N*N+getSumOfCube(N-1));
}

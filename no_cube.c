//program to sum of number of N cubes

void main()
{
    int n,sum;
    system("cls");
    printf("Enter a Natural number ");
    scanf("%d",&n);
    sum = sumOfCube(n);
    printf("Sum of  Cube of  first %d natural number is %d\n",n,sum);
    system("pause");
}


int sumOfCube(int a)
{
    if(a==1)

        return (1);

    return (a*a*a + sumOfCube(a-1));
}

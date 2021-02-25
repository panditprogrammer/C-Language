//program to express a number as sum of two prime numbers
#include <stdio.h>
void main()
{
    int i,n;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        if(isprime(i)&&isprime(n-i))
            printf("(%d,%d)  %d\n",i,n-i ,n);
    }
system("pause");

}

int isprime(int n){
    int i;
    for(i=2;i<=n;i++){

        if(n%i==0)
            break;
    }
        if(i==n)
            return 1;
        else
            return 0;
}

//program to print pascal triangle
#include <stdio.h>
int fact(int);
int combination(int ,int);
void printPascal(int);
//factorial function
int fact(int n)
{
    int f=1;
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    return f;
}

//combination function
int combination(int n,int r)
{
    return (fact(n) /( fact(n-r) *fact(r)));
}
//pascal function
void printPascal(int rows)
{
    int i,j,t,r;
    for(i=1;i<=rows;i++)
    {
        t=1;
        r=0;
        for(j=1;j<=(2*rows-1);j++)
        {
            if(j>=rows+1-i && j<=rows-1+i && t)
            {
                printf(" %d ",combination(i-1,r));
                t=0;
                r++;
            }
            else{
                printf("   ");
                t=1;
            }
        }
        printf("\n");
    }
}
//main function
void main()
{
    int row;
    system("cls");
    printf("Enter rows you want to print pascal triangle ");
    scanf("%d",&row);
    printPascal(row);
    printf("\n");
    system("pause");

}

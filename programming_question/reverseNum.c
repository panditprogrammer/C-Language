//program to reverse digit of given number
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int n,r=0,a;
    system("cls");
    printf("Enter number ");
    scanf("%d",&n);
    while (n)
    {
        a=n%10;
        r=(r*10)+a;
        n=n/10;
    }
    printf("after reversing %d\n",r);
    system("pause");    
    return 0;
}

//program to find fibonacci number
#include <stdio.h>
int fib(int);
void main()
{
    int i,m,fb;
    system("cls");
    printf("Enter how many terms of fibonacci series you want to print \n");
    scanf("%d",&m);

    for(i=1;i<=m;i++){
            fb = fib(i);
        printf("%d ",fb);
    }
    printf("\n");
    system("pause");
}

int fib(int a)
{
    if(a==1 || a==2)
            return 1;
    return (fib(a-1)+fib(a-2));

}

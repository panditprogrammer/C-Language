//program to print  co-prime numbers

#include <stdio.h>
void main()
{
    int n,a,b,i,min;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&n);
    while(n)
    {
        for (b=2;b<=a;b++){
            min = a<b?a:b;
            for(i=2;i<=min;i++){
                if(a%i==0 && b%i==0)
                    break;
            }
            if(i==min+1){
                printf("\n ( %d , %d )",a,b);
                n--;
                if(n==0)
                    exit(0);
            }

        }
        a++;
    }
    system("pause");
}

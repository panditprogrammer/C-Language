//program to check whether given tow numbers is co-prime or not
#include <stdio.h>
void main()
{
    int a,b;
    system("cls");
    printf("Enter two numbers seperated by comma ");
    scanf("%d,%d",&a,&b);

    if(isCoprime(a,b)){
        printf("\n %d and %d are co-prime",a,b);
    }
    else{
        printf("\n %d and %d are not co-prime\n",a,b);
    }


    system("pause");

}

int isCoprime(int a,int b)
{
    int min,i;
    min = a<b?a:b;
    for( i=2;i<=min;i++){

        if(a%i==0 && b%i==0)
            break;

    }
    if(i==(min+1)){
        return 1;
    }
    else{
        return 0;
    }
}

//checking a number is prime or not
#include <stdio.h>
void main()
{
    int N,i,c=0;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&N);

    for(i=2;i<N;i++){
            if(N%i==0){
                break;
            }
    }
    if(i==N)
        {
        printf("prime number\n ");
    }
    else{
        printf("\n not a prime number \n");
    }

system("pause");
}

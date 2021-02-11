//Print first N prime number
#include <stdio.h>
void main()
{
    int N,i;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&N);
    for(i=2;i<N;i++){
            if(N%i==0){
                break;
            }

    }
    system("pause");
}

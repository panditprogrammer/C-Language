//Printing first N odd natural numbers using loop
#include <stdio.h>
void main()
{
    int N,i;
    system("cls");
    printf("Enter a Natural number");
    scanf("%d",&N);
    for(i=1;i<=N*2;i++){
            if(i%2!=0)
        printf("%d ",i);
    }
    system("pause");
}

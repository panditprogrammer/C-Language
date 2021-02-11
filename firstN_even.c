//Program to print first N even natural numbers in reverse order

#include <stdio.h>
void main()
{
    int N;
    system("cls");
    printf("Enter a natural Number");
    scanf("%d",&N);
    for(int i= N*2;i!=1;i--){
            if(i%2==0){
                    printf("%d ",i);

            }

    }
    system("pause");
}

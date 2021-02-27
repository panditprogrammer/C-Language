//program to printf all prime numbers between two numbers

#include <stdio.h>
void main()
{
    int min,max,i,j;
    system("cls");
    printf("Enter two numbers seperated by comma to find all prime number between them ");
    scanf("%d,%d",&min,&max);

    for(i=min;i<max;i++)
    {
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }

    }
            if(j==i){
                printf(" %d",i);
            }

    }
    printf("\n");

    system("pause");

}

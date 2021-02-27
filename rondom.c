//program to generate random number in c in given range
#include <stdio.h>
void main()
{
    int i,j,temp,min,max,arr[10];
     system("cls");
     printf("Enter starting number  ");
     scanf("%d",&min);
     max = min+9;

    for(i=0;i<=9;i++){

        temp = rand()% 10 +min;

        for(j=0;j<=i-1;j++){
            if( temp == arr[j])
                break;
            }
        if(i==j)
            arr[i] = temp;
        else
            i--;
        }

    for(i=0;i<=9;i++){
        printf("  %d",arr[i]);
    }
    printf("\n");
    system("pause");
}

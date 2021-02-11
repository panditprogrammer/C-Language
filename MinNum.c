//minimum number among 10 numbers

#include <stdio.h>
void main()
{
    int min,i ,a[10];
    system("cls");
    printf("Enter 10 Numbers ");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    //fflush(stdin);
    }
    min=a[0];
    for(i=1;i<10;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("smallest number is %d",min);
    system("pause");
}

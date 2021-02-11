//max number among 10

#include <stdio.h>
void main()
{
    int max=0,i ,a[10];
    system("cls");
    printf("Enter 10 Numbers ");
    for(i=0;i<10;i++){
    scanf("%d",&a[i]);
    //fflush(stdin);
    }

    for(i=0;i<10;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("Greatest number is %d",max);
    system("pause");
}

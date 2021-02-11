//program to find greater number among three number
#include <stdio.h>
void main()
{
    int a,b,c,t;
    system("cls");
    printf("Enter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c){
            printf("%d is greatest number \n",a);
        }
        else{
            if(b>c){
                printf("%d is greatest number \n",b);
            }
    }
    else{
        if(b>c){
            printf("%d is greatest number \n",b);
        }
    }

}

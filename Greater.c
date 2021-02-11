//finding greatest number among three number
#include <stdio.h>
void main()
{
    int x,y,z;
    system("cls");
    printf("Enter three number seperated by comma ");
    //we can use seperater in scanf
    scanf("%d,%d,%d",&x,&y,&z);
    if(x>y){
        if(x>z)
            printf("%d is greater number\n",x);
    }
    else{
             if(y>z)
                printf("%d is greater number\n",y);
            else
                printf("%d is greater number\n",z);
    }

    system("pause");
}

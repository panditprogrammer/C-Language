//program to calculate a to the power b
#include <stdio.h>
void main()
{
    int a,b,p=1,i;
    system("cls");
    printf("Enter a and b\n");
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++){
        p=p*a;
    }

    printf("\nPower of a^b is %d\n",p);
    system("pause");

}

//program to calculate HCF of two numbers
#include <stdio.h>
void main()
{
    int a,b,i,hcf=0;
    system("cls");
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);

    for(i=a<b?a:b;i>0;i--){
        if(a%i==0&&b%i==0){
            hcf = i;//this is not required
            break;
        }
    }
    printf("HCF of %d and %d is %d\n",a,b,hcf);
    system("pause");
}

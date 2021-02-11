//function to calculate factorial of sum of  N numbers

#include <stdio.h>
int fact (int n);
void main()
{
    int N,s;
    system("cls");
    printf("Enter a number ");
    scanf("%d",&N);
    s = fact(N);
    printf("Factorial of  %d is %d \n",N,s);
    system("pause");

}

int fact (int n){
    int i,f=1;
    for (i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}

//Printing first N natural numbers in reverse using loop
#include <stdio.h>
void  main()
{
    int N;
    system("cls");
    printf("Enter a Natural number ");
    scanf("%d",&N);
    for(int i=N;i>0;i--){
            printf("%d ",i);

    }
    printf("\n");
    system("pause");

}

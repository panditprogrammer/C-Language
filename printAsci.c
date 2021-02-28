//program to print ASCII CODE
#include <stdio.h>

void main()
{
    int  a;
    system("cls");
    printf("===ASCII CHART===\n");

    for(a=0;a<256;a++){
            if(a%24==0 ){
                system("color 70");
                printf("\n");
                system("pause");
                system("cls");
            }
        printf("\n %d  =  %c " ,a,a);

    }

    system("pause");

}

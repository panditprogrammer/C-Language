#include <stdio.h>

void main( ){

    int p ,r;
    int t;

    printf("Simple Interest \n");
    printf("Enter principle ,rate and time");
    scanf("%d",&p);
    fflush(stdin);
    scanf("%d",&r);
    fflush(stdin);
    scanf("%d",&t);
    printf("Simple Interest is %d",(p*r*t)/100);
}
#include <stdio.h>
#include <stdlib.h>

void main()
{
    float arr_ay[5],sum=0, avg=0;
	int a;

    system("cls");
	printf("Average of five numbers\n ");

    for (a=0 ; a<5; a++)
    {
        printf("Enter  number");
        scanf("%f",&arr_ay[a]);
        sum=sum+arr_ay[a];

    }

    avg=sum/5;
    printf("Average is %f\n",avg);
    system("pause");

}

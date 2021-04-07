// creating a array for adding two matrix
#include <stdio.h>
#include <stdlib.h>


void main(void)
{
	int i, j  , arr_1[3][3],arr_2[3][3],arr_3[3][3];
	
	system("cls");
	
	printf("Enter 9 numbers for first matrix");
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
			scanf("%d",&arr_1[i][j]);
	printf("Enter 9 numbers for second matrix");
	
	for (i=0;i<3;i++)
		for (j=0;j<3;j++)
			scanf("%d",&arr_2[i][j]);
		
	printf("sum of two matrix is \n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			arr_3[i][j]=arr_1[i][j]+arr_2[i][j];
			printf("%d ",arr_3[i][j]);
		
		}

		printf("\n");
	}
}
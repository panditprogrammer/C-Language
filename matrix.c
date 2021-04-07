/* two dimensional array in c language */

#include <stdio.h>
#include <stdlib.h>

void main(void)

 {
	 system("cls");
     printf("sum of two matrix a*b \n\n");
   int a[3][3],b[3][3],c[3][3] ,i ,j;

   printf("Enter 9 numbers for first matrix:");
   for(i=0;i<=2;i++)
   {
    for(j=0;j<=2;j++)
    scanf("%d",&a[i][j]);
   }
    printf("Enter 9 numbers for second matrix:");
    for(i=0;i<=2;i++)
    {
      for(j=0;j<=2;j++)
        scanf("%d",&b[i][j]);
    }
     for (i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {

     c[i][j]=a[i][j]+b[i][j];
     printf("%d ",c[i][j]);
        }
        printf("\n");
     }

     system("pause");
 }

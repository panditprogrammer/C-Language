//program to arrange strings in dictionary order
#include <stdio.h>
#include <string.h>
void main()
{
    int  j, i=0,round,a;
    char str[5][20],temp[20];

    system("cls");
    printf("Enter five names ");
    while(i<=4)
    {
        gets(str[i]);
        i++;
    }
    for(round=1;round<=4;round++)
    {
        for(j=0;j<=4-round;j++)
        {
            a =  strcmp(str[j],str[j+1]);
            if(a>0)
            {
                strcpy(temp,str[j]);
                strcpy(str[j],str[j+1]);
                strcpy(str[j+1],temp);

            }

        }
    }
    printf("Dictionary order is \n");
    for(i=0;i<=4;i++){
        puts(str[i]);

    }
    system("pause");
}

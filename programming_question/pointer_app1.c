#include <stdio.h>
#include <stdlib.h>


void input_user(int *p)
{
    int i;
    printf("Enter five numbers ");
    for (i=0;i<=4;i++)
    scanf("%d",p+i);
}

void Disp(int *p)
{
    int i;
    for (i=0;i<=4;i++)
        printf("%d \n",*(p+i));
}
void sort_num(int *p)
/*{
    int r,t,i;
    for (r=1;r<=4;r++)
    {
        for (i=0;i<=3;i++)
            if(*(p+1) > *(p+i+1))
        {
            t= *(p+1);
            *(p+i) = *(p+i+1);
            *(p+i+1)=t;
        }
    }

}
*/
void main()
{
    int a[5];
    int *p;
     p=&a[0];
    system("cls");
    printf("To get ascending order of numbers \n");
    input_user(p);
    printf("after input...\n");                                      //getting input from user using pointer
    Disp(p);
                                                            //displaying array using pointer
    printf("after sorting ...\n");
    sort_num(p);                                                 //this function is not working
    printf(" numbers in array ..\n");
    Disp(p);

    system("pause");


}

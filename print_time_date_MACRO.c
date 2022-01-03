//some predefined macro
//printing time and date using predefined macro

#include <stdio.h>
#include <stdlib.h>

void main()
{
    system("cls");
    printf("Time is %s \n",__TIME__);
    printf("Date is %s \n",__DATE__);

    system("pause");
}

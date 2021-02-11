//program only integer allow input
#include <stdio.h>
void main()
{
    int n=0,ch;
    system("cls");
    printf("Enter number ");

   while(1){
    ch =getch();
    if(ch>=48 && ch<=58){
        printf("%c",ch);
        n=n*10+(ch-48);

        }
        if(ch==13)
            break;
   }
   printf("\nYou have entered %d\n",n);

 system("pause");
}

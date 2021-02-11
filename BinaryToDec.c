//Binary to decimal coversion as efficient as possible

#include <stdio.h>

void main()
{
    int dec=0;
    char s[50];
    system("cls");

    printf("Enter a Binary Number ");//10110
    gets(s);

    for(int i=0;s[i];i++){
        if(s[i]=='1'){
            dec=dec*2+1;
        }
        else{
            dec=dec*2+0;
        }
    }
    printf("Decimal Number is %d\n",dec);
    system("pause");
}

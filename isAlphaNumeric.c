//Program to check whether a string is alphanumeric or not
#include <stdio.h>

void main()
{
    char S[20];
    int alpha=0,digit=0,i=0;
    system("cls");
    printf("Enter String ");
    gets(S);
    for( i;S[i];i++){
        //  'a' is represent ascii code

        if(S[i]>= 'a' && S[i] <= 'z'  || S[i] >= 'A' && S[i]<= 'Z' ){
                alpha =1;
        }
        if(S[i]>='0'&&S[i]<='9'){
            digit=1;
        }
    }
    if(alpha&&digit){
        printf("AlphaNumeric\n");
    }
    else{
        printf("Not AlphaNumeric\n");
    }


    system("pause");
}

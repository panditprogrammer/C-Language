// Program to count vowels in a given string
#include <stdio.h>
void main()
{
    char s[200];
    char v[]={'a','e','i','o','u','A','E','I','O','U'};
    int c=0;
    system("cls");
    printf("Enter string ");
    gets(s);
    for (int i=0;s[i];i++){
        for(int j=0;v[j];j++){
            if(s[i]==v[j]){
                c++;
            }
        }
    }
    printf("Total vowels are %d\n",c);
    system("pause");
}

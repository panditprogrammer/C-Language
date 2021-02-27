//program to reverse a string
#include <stdio.h>
void main()
{
    char s[40],temp;
    int i,len;
    system("cls");

    printf("Enter string ");
    gets(s);

    //finding length
    for(len=0;s[len];len++);

    for(i=0;i<len/2;i++){
        temp = s[i];
        s[i] = s[len-1-i];
        s[len-1-i] = temp;
    }

    printf("Reversed string is  %s",s);



}

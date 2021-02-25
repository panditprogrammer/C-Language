//program to count word in a sentence
#include <stdio.h>
char * removeExtraSpace(char *s);
int count_word(char *s);
void  main()
{
    system("cls");
    char str[100];
    int num_of_word=0;
    printf("Enter string ");
    gets(str);

    printf("\n string lenth is %d",strlen(str));
    strcpy(str,removeExtraSpace(str));
    printf("\n string lenth is %d",strlen(str));

    num_of_word = count_word(str);
    printf("\nNumber of words in given string is %d \n",num_of_word);
    system("pause");

}
int count_word(char *s)
{
    int count=0,i=0;
    while(*(s+i)){
        if(*(s+i) == ' '){
            count++;
        }
        i++;
    }
    return (count+1);
}
char * removeExtraSpace(char *s)
{
    char *p;
    int i=0,j=0;
    p=malloc(strlen(s)+1);
    while(*(s+i)){
        while (*(s+i) == ' '){
            i++;
        }
        while(*(s+i) != ' ' && *(s+i) != '\0'){
            *(p+j) =*(s+i);
            i++;
            j++;
        }
        if(*(s+i)== '\0' && (p+j-1) == ' ')
         {
                j--;
        *(p+j) = *(s+i);
        j++;
         }
    }
    return (p);
}

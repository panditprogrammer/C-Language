//program to remove duplicate character from a string
char * remove_duplicate(char *s);
void main()
{
    char str[50],*ptr;
    system("cls");
    printf("Enter a string \n");
    gets(str);
    ptr = remove_duplicate(str);
    printf("%s \n",ptr);
    system("pause");

}

char * remove_duplicate(char *s)
{
    int i,j;
    for(i=0;s[i];i++){

        if(s[i]==s[i+1]){

            for(j=i;s[j];j++)

                s[j] = s[j+1];

            i--;
        }

    }
return s;

}

#include <stdio.h>

//get custom input

/*
params 1. char array
params 2. length of char array
return number of character successfully gets input

 */
int get_input(char str[], int array_length)
    {
        int character, i = 0;
        while((character = getchar()) != '\n')
        {
            if(i < array_length)
                str[i++] = character;
        }
        str[i] = '\0';
                 return i;
    }


int main()
{
    char str[20];


    int char_len = get_input(str,20);

    printf("%d is length of %s\n",char_len,str);





    return 0;
}

#include <stdio.h>
#include <stdlib.h>

void main()
{
	char p[100]={'p','a','n','d','i','t','p','r','o','g','r','a','m','m','e','r','.','c','o','m'};
	int a;
	char n[200];//={"the quick brown fox jumps over the lazy dog."};
	system("cls");
	//for (a=0; p[a]!='\0';a++)
	//printf("%c",p[a]); // %c is used for one character
	//printf("%s",p);   //%s for string


    //scanf("%s",n);
    printf("Enter yourself ");
    gets(n);    //input multistring function
    //printf("%s",n);
    puts(n);    //printing multistring

	printf("\n");
	system("pause");

}

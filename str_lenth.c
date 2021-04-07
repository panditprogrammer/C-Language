#include <stdio.h>
#include <stdlib.h>
#include <string.h>


  int str00(char *p )
  {
      int i;
      for (i=0; *(p+i)!= '\0';i++);
      return i;
  }


char* reversestr(char *p)
{
    int i,l;
    char t;
    for (l=0;*(p+1)!= '\0';l++)
        for (i=0;i<l/2;i++)
    {
        t = *(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return (p);
}

  void main()
  {
      char input_str[200];
      int n,c,i;


      system("cls");
      printf("Enter some text \n");
      gets(input_str);
      c=strlen(&input_str[0]);  //this is predefined function for calculating string lenth.
      printf(" lenght of entered string is %d\n",c);
      /*for (i=0;i<=c;i++)
      printf("%c",input_str[i]);*/
      //printf("%s\n",input_str);

      puts(input_str);
      printf("\n reverse string\n");


      printf("%s\n",strrev(input_str));


      system("pause");
  }

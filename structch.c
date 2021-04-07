#include <stdio.h>
#include <stdlib.h>

 struct student
 {

 int rollno;
 //char name[20];
 int age;

 };

 struct date
 {
 int d,m,y;

 };

void main()
{

    system("cls");
    struct student s1;
    struct date d1;
    s1.rollno=01;
    //s1.name={"ruby"};
    s1.age= 20;
    printf("Enter Roll No. and Age ");
    scanf("%d%d",&s1.rollno,&s1.age);
    //printf("Enter Date of Birth ");
    //scanf("%d/%d/%d\n",&d1.d,&d1.m,&d1.y);
    printf("\nRollno. is %d ,Age is %d\n",s1.rollno,s1.age);
    //printf("Your Date of Birth is %d/%d/%d",d1.d,d1.m,d1.y);


    system("pause");

}

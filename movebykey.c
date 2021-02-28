//program to move thing
#include <windows.h>
#include <stdio.h>
void gotoxy(int x,int y);
void main()
{
    int x = 30,y=10;
    char c;
    system("cls");
    gotoxy(x,y);
    printf("O");
    while(1)
    {
        c = getch();
        switch(c)
        {
            case 'a':  x--;
            break;
            case 'w':  y--;
            break;
            case 'd':  x++;
            break;
            case 's':  y++;
            break;
            case 27:  exit(0);
        }
                system("cls");
                gotoxy(x,y);
                printf("O");
    }
    system("pause");
}

void gotoxy(int x,int y)
{
    COORD  c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}

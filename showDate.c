//program to show system date and time
#include <stdio.h>
#include <windows.h>
void main()
{
    system("cls");
    printf("==== TIME AND DATE====\n");
    SYSTEMTIME stime;
    GetSystemTime(&stime);
    printf(" %d /%d /%d\n",stime.wDay,stime.wMonth,stime.wYear);
    //printf(" %d :%d :%d\n",stime.wHour,stime.wMinute,stime.wSecond);
    system("pause");
}

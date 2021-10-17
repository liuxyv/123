#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{   int fd[3],ax[3],y[3],i;
       gotoxy(ax[i], y[i]);            //首先在飞机尾处输出整架飞机

    if (fd[i] == 1)
        printf("|---0>");
    else
        printf(">>>>>>");

    gotoxy(ax[i] - 1, y[i]);        //清除飞机尾部留下的痕迹
    printf(" ");

    ax[i]++;                        //然后飞机尾坐标自增，下次自飞机尾输出整架飞机
    return 0;
}
void  gotoxy( int  x,  int  y)  //gotoxy 源代码
{
COORD pos;
pos.X = x - 1;
pos.Y = y - 1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

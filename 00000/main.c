#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{   int fd[3],ax[3],y[3],i;
       gotoxy(ax[i], y[i]);            //�����ڷɻ�β��������ܷɻ�

    if (fd[i] == 1)
        printf("|---0>");
    else
        printf(">>>>>>");

    gotoxy(ax[i] - 1, y[i]);        //����ɻ�β�����µĺۼ�
    printf(" ");

    ax[i]++;                        //Ȼ��ɻ�β�����������´��Էɻ�β������ܷɻ�
    return 0;
}
void  gotoxy( int  x,  int  y)  //gotoxy Դ����
{
COORD pos;
pos.X = x - 1;
pos.Y = y - 1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

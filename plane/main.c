#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <string.h>
#include<windows.h>


int main(){
    int y=19;
    int ax[3]={0};
    int fd[3];
#    define R 26;
    gotoxy(20,20);
    printf("w");

    if(getchar()){
        gotoxy(20,y);
        printf("0");

    }
    while(y){
        gotoxy(20,y);
        printf("0");
        y--;

    }

        int j;
    srand((unsigned)time(NULL));            //初始化随机种子
    for (j = 0; j < 3; j++)                 //初始化飞机的初始x坐标，写在循环之外
    {
        ax[j] = rand() % R;
        fd[j] = rand() % 2;
    }
    getchar();
}

void  gotoxy( int  x,  int  y)  //gotoxy 源代码
{
COORD pos;
pos.X = x - 1;
pos.Y = y - 1;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number,ask,times=1,chances;
    long t;
    chances=5;
    srand((unsigned)time(NULL));
    number = rand()%100;
    printf("请输入您猜的数字(0~100)");
    scanf("%d",&ask);
    t=time(NULL);
    while(ask!=number)
    {if(ask>number)printf("您猜的数字太大了，请重新输入：");
     if(ask<number)printf("您猜的数字太小了，请重新输入：");
     if(0<chances<=5)printf("您还有%d次机会\n",chances);
     if(chances<=0)printf("您的机会已用完。");
     if(chances<=0)return 0;

     scanf("%d",&ask);
     times++;
     chances--;
    }
     t=time(NULL)-t;
    printf("\n恭喜您！回答正确。您猜了%d次，用时%d秒。\n",times,t);
    return 0;
}

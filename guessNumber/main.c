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
    printf("���������µ�����(0~100)");
    scanf("%d",&ask);
    t=time(NULL);
    while(ask!=number)
    {if(ask>number)printf("���µ�����̫���ˣ����������룺");
     if(ask<number)printf("���µ�����̫С�ˣ����������룺");
     if(0<chances<=5)printf("������%d�λ���\n",chances);
     if(chances<=0)printf("���Ļ��������ꡣ");
     if(chances<=0)return 0;

     scanf("%d",&ask);
     times++;
     chances--;
    }
     t=time(NULL)-t;
    printf("\n��ϲ�����ش���ȷ��������%d�Σ���ʱ%d�롣\n",times,t);
    return 0;
}

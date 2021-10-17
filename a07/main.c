#include <stdio.h>
#include <stdlib.h>

int main()
{   int times;
    printf("请单击回车键");
    printf("\a");


    while(getchar()&&times<=5){
        printf("\a");
        times++;

    }
    printf("你怎么这么听话啊");
    getchar();
    return 0;
}

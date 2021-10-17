#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int a,b,c,f;
    float d,e,g;
    scanf("%d%d%d",&a,&b,&c);
      f=b*b-4*a*c;
    if(a<1e-6&&a>-1e-6){
        if(b<1e-6&&b>-1e-6)printf("x不存在实数解");
        else printf("x值为%f",-c/b);
    }
    else {
        if(f<0)printf("x不存在实数解");
        else{
            g=sqrt(f);
            d=(-b+g)/2;
            e=(-b-g)/2;
            printf("x值为%f或者%f",d/a,e/a);
        }
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   int a,b,c,f;
    float d,e,g;
    scanf("%d%d%d",&a,&b,&c);
      f=b*b-4*a*c;
    if(a<1e-6&&a>-1e-6){
        if(b<1e-6&&b>-1e-6)printf("x������ʵ����");
        else printf("xֵΪ%f",-c/b);
    }
    else {
        if(f<0)printf("x������ʵ����");
        else{
            g=sqrt(f);
            d=(-b+g)/2;
            e=(-b-g)/2;
            printf("xֵΪ%f����%f",d/a,e/a);
        }
    }

    return 0;
}

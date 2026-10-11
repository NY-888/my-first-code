#include <stdio.h>
#define G 9.8

int main()
{
    double t,v,s;

    printf("你可以输入一个下落时间t；");
    scanf("%lf",&t);

    s=0.5*G*t*t;
    v=G*t;

    printf("下落距离为%.2f,落地瞬时速度为%.2f",s,v);

    return 0;


}




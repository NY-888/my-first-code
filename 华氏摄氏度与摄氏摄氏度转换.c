#include <stdio.h>
int main( )
{
    printf("请输入一个华氏温度：");
    double c,f;
    scanf("%lf",&f);

    c=(5.0/9)*(f-32);

    printf("摄氏温度为%.2f摄氏度",c);

    return 0;


}

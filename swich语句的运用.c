#include <stdio.h>
int main()
{
    int week;

    while(1)
    {
      printf("今天星期几？（1——7）\n(输入零退出）");
    scanf("%d",&week);
    if (week==0)
    {
        printf("退出程序\n");
        break;
    }
    switch(week)
    {
         case 1:
             printf("今天可以去跑步\n");
         break;
         case 2:
         printf("今天可以去游泳\n");
         break;
         case 3:
         printf("今天可以去慢走\n");
         break;
         case 4:
         printf("今天可以去骑动感单车\n");
         break;
         case 5:
         printf("今天可以去拳击\n");
         break;
         case 6:
         printf("今天可以去爬山\n");
         break;
         case 7:
         printf("今天可以去大吃一顿\n");
         break;
         default:
         printf("亲，你输入的日期好像不存在呢\n");

    }
    }


}

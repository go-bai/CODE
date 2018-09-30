#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<Windows.h>
#define MAX 70	//地图长度,请尽量小于80.否则会出现问题.
#define qping 1 //1 清屏刷新地图, 其他: 下一行输出.
#define TIME 1	// 每回合等待时间. ms
pre();
movewg();
movetz();
pd();
print();
clean();
end();
int wg,tz,winner=0;
int tw=0, ww=0, tie=0;
main()
{
    while (1)
    {

        pre();
        while (wg < MAX && tz < MAX)
        {
            clean();
            movewg();
            movetz();
            pd();
            print();
//	Sleep(TIME);
        }
        end();
        if (winner == 1)ww++;
        else if (winner == 2)tw++;
        else if (winner == 3)tie++;
        printf("共%d 局\n兔子：%-6d\t乌龟：%-6d\t平局：%-6d\n",(tw+ww+tie), tw, ww, tie);
//system("pause");
        Sleep(500);
        system("cls");
    }
}
pre()
{
    wg = 1;
    tz = 1;
    winner = 0;
    srand((unsigned int)rand()*time(0));
    printf("BANG !!!!!\nAND THEY'RE OFF !!!!!\n");
}
movewg()
{
    int a=rand()%10+1;
    switch (a)
    {
    case 1:
    case 2:
        wg -= 6;
        break;
    case 3:
    case 4:
    case 5:
        wg += 1;
        break;
    default:
        wg += 3;
    }
}
movetz()
{
    int a = rand() % 10 + 1;
    switch (a)
    {
    case 1:
    case 2:
        tz -= 2;
        break;
    case 3:
    case 4:
    case 5:
        tz += 1;
        break;
    case 6:
        tz -= 12;
        break;
    case 7:
    case 8:
        tz += 9;
        break;
    default:
        break;
    }
}

pd()
{
    tz = (tz < 1) ? 1 : tz;
    wg = (wg < 1) ? 1 : wg;
    tz = (tz > MAX) ? MAX : tz;
    wg = (wg > MAX) ? MAX : wg;
    if (wg == MAX) winner += 1;
    if (tz == MAX)winner += 2;
}
print()
{
    int i;
    char qqq[8] = "OUCH!!!";
    if (wg == tz)
    {
        for (i = 1; i < wg; i++)
            printf(" ");
        printf("%-*s|", 70 - i, qqq);
    }
    else
    {
        for (i = 1; i <= MAX; i++)
            printf("%c", (i == wg) ? 'T' : ((i == tz) ? 'H' :( (i==70)?'|':' ')));

    }
}
clean()
{

    printf("%s",(qping==1)?"\r":"\n");
}
end()
{
    printf("\n%s", (winner == 1) ? "TORTOISE WINS!!! YAY!!!\n" : ((winner == 2) ? "Hare wins. Yuch.\n" : "It's a tie\n"));
}

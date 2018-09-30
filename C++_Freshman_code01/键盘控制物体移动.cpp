//
//                       _oo0oo_
//                      o8888888o
//                      88" . "88
//                      (| -_- |)
//                      0\  =  /0
//                    ___/`---'\___
//                  .' \\|     |// '.
//                 / \\|||  :  |||// \
//                / _||||| -:- |||||- \
//               |   | \\\  -  /// |   |
//               | \_|  ''\---/''  |_/ |
//               \  .-\__  '-'  ___/-. /
//             ___'. .'  /--.--\  `. .'___
//          ."" '<  `.___\_<|>_/___.' >' "".
//         | | :  `- \`.;`\ _ /`;.`/ - ` : | |
//         \  \ `_.   \_ __\ /__ _/   .-` /  /
//     =====`-.____`.___ \_____/___.-`___.-'=====
//                       `=---='
//
//
//     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
//               ·ð×æ±£ÓÓ         ÓÀÎÞBUG
#include<iostream>
#include<conio.h>//getch()
#include<cstdio>
#include<cstdlib>
#include<windows.h>
#include<ctime>
//kbhit();
using namespace std;
void gotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int main()
{

    int x=0;
    int y=0;
    int x1=0;
    int y1=0;
    while(true)
    {
        if(x<0)
            x=0;
        if(y<0)
            y=0;


        gotoxy(x1,y1);
        cout<<' ';
        x1=x;
        y1=y;
        gotoxy(x,y);
        cout<<'@';
        char a=getch();
        if(a=='w')
        {
            y--;
        }
        else if(a=='s')
        {
            y++;
        }
        else if(a=='a')
        {
            x--;
        }
        else if(a=='d')
        {
            x++;
        }

    }

}

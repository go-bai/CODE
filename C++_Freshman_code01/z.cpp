#include <iostream>//7-28
#include <cstdlib>
#include <ctime>
using namespace std;
bool qz(int [][8],int,int,int [],int [],int [],int [],int);
void printer(int [][8],int [],int [],int);
void printer1(int [][8],int,int,int [],int [],int);


int main(void)
{
    int row=3,col=4;                //马初始坐标
    int a[8][8]= {0};               //二维棋盘数组
    int b[65]= {0},c[65]= {0};      //记录每一步走的通的x,y坐标
    int h[8]= {2,1,-1,-2,-2,-1,1,2};   //马逆进针要走的水平值
    int v[8]= {-1,-2,-2,-1,1,2,2,1};   //马逆进针要走的垂直值
    int value=1;                    //当前步数
    a[row][col]=1;                    //棋盘上的位置置1
    b[value]=row;
    c[value]=col;        //记录第一个坐标
    printer1(a,row,col,b,c,value);    //显示第一个验证

    b[value]=row;
    c[value]=col;        //记录第一步x,y坐标值
    bool flag=qz(a,row,col,b,
                 c,h,v,value);
    printer(a,b,c,value);
    return 0;
}

bool qz(int a[][8],int row,int col,int b[],int c[],int h[],int v[],int value)
{
    if(value==64)
        return true;
    bool flag;
    int frow=0,fcol=0;
    for(int i=0; i<8; ++i)
    {
        frow=row+v[i];
        fcol=col+h[i];
        if(frow<8 && fcol<8 && frow>=0 && fcol>=0 && a[frow][fcol]==0)//要走的位置是否在棋盘内?
        {
            value++;                        //步数+1
            row=frow;
            col=fcol;                //马移动走的通的位置
            b[value]=row;
            c[value]=col;        //记下马走的通的坐标
            a[row][col]=1;                    //把马当前位置在棋盘上位置位置置1
            printer1(a,frow,fcol,b,c,value);
            flag=true;

            //把相关坐标当参数调用自已
            flag=qz(a,row,col,b,c,h,v,value);
            cout<<row<<"  "<<col <<endl;        //运行这里row和col变成0

        }
        else
        {
            frow=row;
            fcol=col;
        }

    }

    if(i>=8)    //如果运行这里表示当前坐标8个方向都走不通
    {
        row=b[value-1];
        col=c[value-1];    //还原前一个坐标
    }

}


void printer(int a[][8],int b[],int c[],int value)
{
    for(int i=1; i<65; i++)
    {
        cout<<"步骤 "<<i<<" =["<<b[i]<<","<<c[i]<<"]"<<endl;
    }
}


void printer1(int a[][8],int frow,int fcol,int b[],int c[],int value)
{
    cout<<"row="<<frow<<"    "<<"col="<<fcol<<endl;
    cout<<"步骤 "<<value<<" =["<<b[value]<<","<<c[value]<<"]"<<endl;
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; ++j)
        {
            cout<< a[i][j]<<"  ";
        }
        cout<<endl;
    }

    cout<<endl;
}

#include<iostream>
using namespace std;
void move(int x,int y)
{
    cout<<x<<"->"<<y<<endl;//执行移动的操作
}
void hnt(int num,int a,int b,int c)
{
    if(num==1)
        move(a,c);//递归出口
    else
    {
        hnt(num-1,a,c,b);
        move(a,c);
        hnt(num-1,b,a,c);
    }


}
int main()
{
    cout<<"请输入准备移动的盘子数:";
    int num;
    cin>>num;
    hnt(num,1,2,3);

}

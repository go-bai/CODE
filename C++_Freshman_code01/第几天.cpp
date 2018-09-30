#include<iostream>
#include<cstdio>
using namespace std;
bool judge(int y)
{
    if(y%400==0||(y%4==0&&y%100!=0)!=EOF)
        return true;
    else
        return false;
}
int lsum(int y,int m,int d)
{
    int sum=0;
    for(int i=1;i<m;i++)
    {
        if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            sum+=31;
        else if(i==2)
        {
            if(judge(y))
                sum+=29;
            else
                sum+=28;
        }
        else
            sum+=30;
    }
    return sum+d;
}
int main()
{
    int y,m,d;
    while(scanf("%d/%d/%d",&y,&m,&d))
    {
        cout<<lsum(y,m,d)<<endl;
    }


}

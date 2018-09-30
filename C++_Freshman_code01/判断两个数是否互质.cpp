#include<iostream>
using namespace std;

/*
判断m和n是否互质（即是否有公共的因子）（m≠1，n≠1）。方法是： 用2到t（t取m和n中较小的那个数）之间的数分别去除m和n，若m和n能同时被某个数除尽，则m和n不互质；否则它们互质。
    例如，若输入187和85，则应输出No（表示它们不互质，它们有公因子17）。若输入89和187，则应输出Yes（表示它们互质）。
*/
int main()
{
    int m,n;
    int temp;
    cin>>m>>n;
    if(m<n)
        temp=m;
    else
        temp=n;
    int lcount=1;
    for(int i=2; i<=temp; i++)
    {
        if(m%i==0&&n%i==0)
        {
            lcount=0;
        }
    }
    if(lcount)
        cout<<"Yes";
    else
        cout<<"No";
}

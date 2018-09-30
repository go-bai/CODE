#include<iostream>
using namespace std;
int main()
{
    int lcount=0;
    int n,m;
    int num;
    cin>>n>>m;
    int a[10];//存n中物品的各自的数量

    int i=0;

    while(n>0)
    {

        cin>>num;
        a[i]=num;
        i++;
        n--;
    }//有i种
    for(int j=0;j<i;j++)//计算m各全选一种物品
    {
        if(a[j]>=m)
            lcount++;
    }
    cout<<lcount;

}

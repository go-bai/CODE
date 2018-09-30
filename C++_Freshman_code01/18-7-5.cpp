#include<iostream>
#include<cstring>
#include<cstdio>
#include<cmath>
#include<algorithm>
using namespace std;
int main1()
{
    int n;
    cin>>n;
    char *arr=new char [n];//动态数组可以自定义数组的大小，n是自己确定的，普通定义数组int arr[n];是错误的
    cin>>arr;
    cout<<arr;
    delete []arr;//释放掉刚new的数组，省空间吧


}
int main()
{
    int num[3]={2,1,3};
    sort(num,num+3);
    for(int i=0;i<3;i++)
    {
        cout<<num[i]<<endl;
    }
}

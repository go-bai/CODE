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
    char *arr=new char [n];//��̬��������Զ�������Ĵ�С��n���Լ�ȷ���ģ���ͨ��������int arr[n];�Ǵ����
    cin>>arr;
    cout<<arr;
    delete []arr;//�ͷŵ���new�����飬ʡ�ռ��


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

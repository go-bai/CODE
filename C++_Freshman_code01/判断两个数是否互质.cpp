#include<iostream>
using namespace std;

/*
�ж�m��n�Ƿ��ʣ����Ƿ��й��������ӣ���m��1��n��1���������ǣ� ��2��t��tȡm��n�н�С���Ǹ�����֮������ֱ�ȥ��m��n����m��n��ͬʱ��ĳ������������m��n�����ʣ��������ǻ��ʡ�
    ���磬������187��85����Ӧ���No����ʾ���ǲ����ʣ������й�����17����������89��187����Ӧ���Yes����ʾ���ǻ��ʣ���
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

#include<iostream>
using namespace std;
int main()
{
    int num;
    int temp;
    cout<<"������һ��ʮ������:";
    cin>>num;
    temp=num;
    int n=0;
    int i=0;
    int j=1;
    while(temp!=0)
    {
        i=temp%8;
        temp/=8;
        for(int k=1; k<j; k++)
        {
            i*=10;
        }
        n+=i;
        j++;
    }
    cout<<num<<"ת��Ϊ�˽�����:";
    cout<<n;
}

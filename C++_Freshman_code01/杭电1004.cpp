#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char arr[1000][15];//�����洢��Щ��ɫ
    int lcount[1000];//�����洢ÿ����ɫ���ֵĴ�������ÿ�δ�����ɫ��ʱ�򽫶�Ӧλ�ó�ʼ��Ϊ�㣬Ȼ������Ƚϣ�ÿ������ͬ�Ķ���++
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            lcount[i]=0;
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(strcmp(arr[i],arr[j])==0)
                    lcount[i]++;
            }
        }
        int lmax=lcount[1];
        int flag=1;
        for(int i=1; i<=n; i++)
        {
            if(lcount[i]>lmax)
            {
                lmax=lcount[i];
                flag=i;
            }
        }
        cout<<arr[flag]<<endl;


    }
}

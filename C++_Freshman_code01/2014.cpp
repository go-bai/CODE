#include<iostream>
#include<algorithm>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n>2)
    {
        int a[101];
        int num;
        int m=n;
        while(m>0)
        {
            cin>>num;
            a[m-1]=num;
            m--;
        }
        sort(a,a+n);//�Զ�����
        double sum=0;
        for(int i=1; i<n-1; i++)//��ͷȥβ���൱��ȥ�������ֵ����Сֵ
        {
            sum+=a[i];
        }
        double p=sum/(n-2);
        cout<<fixed<<setprecision(2)<<p<<endl;
    }
}

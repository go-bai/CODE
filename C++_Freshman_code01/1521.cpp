#include<iostream>
using namespace std;
int main()
{
    int lcount=0;
    int n,m;
    int num;
    cin>>n>>m;
    int a[10];//��n����Ʒ�ĸ��Ե�����

    int i=0;

    while(n>0)
    {

        cin>>num;
        a[i]=num;
        i++;
        n--;
    }//��i��
    for(int j=0;j<i;j++)//����m��ȫѡһ����Ʒ
    {
        if(a[j]>=m)
            lcount++;
    }
    cout<<lcount;

}

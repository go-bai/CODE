#include <iostream>
using namespace std;
#define MAX 19
int A[MAX][MAX];

int main()
{
    int i, j;
    int  cnt1, cnt2;
    int flag=0;

    for( i=1; i<20; i++)
        for(j=1; j<20; j++)
            cin>>A[i][j];

    //ˮƽ������Ѱ��������ͬ������
    for(i = 1; i <=19; i++)
    {
        cnt1 = 0;
        cnt2 = 0;
        for(j = 1; j <=19; j++)
        {
            A[i][j] ==  1 ? cnt1++ : cnt1=0;
            A[i][j] == -1 ? cnt2++ : cnt2=0;
            if(cnt1 == 5)
            {
                cout<<"����Ӯ��"<<endl,flag=0;
                return 0;
            }
            if(cnt2 == 5)
            {
                cout<<"����Ӯ��"<<endl,flag=0;
                return 0;
            }
            if(cnt1!=5 && cnt2!=5)
                flag=1;
        }
    }
    //��ֱ������Ѱ��������ͬ������
    for(i = 1; i <=19; i++)
    {
        cnt1 = 0;
        cnt2 = 0;
        for(j = 1; j <=19; j++)
        {
            A[j][i] ==  1 ? cnt1++ : cnt1=0;
            A[j][i] == -1 ? cnt2++ : cnt2=0;
            if(cnt1 == 5)
            {
                cout<<"����Ӯ��"<<endl,flag=0;
                return 0;
            }
            if(cnt2 == 5)
            {
                cout<<"����Ӯ��"<<endl,flag=0;
                return 0;
            }
            if(cnt1!=5 && cnt2!=5)
                flag=1;
        }
    }
    if(flag)
        cout<<"��δ����Ӯ��!"<<endl;
    return 0;
}

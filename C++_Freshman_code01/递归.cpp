#include <iostream>
using namespace std;
int n = 0;

void swap(char *q ,char *p)
{   //��������
    int temp;
    temp= *q;
    *q = *p;
    *p = temp;
}

void perm(char arr[],int k, int m )
{
    int i;
    if(k >m)
    {
        for(i = 0 ; i <= m ; i++)
        {  //�ݹ�������ڣ�������ֻʣ��һ������ʱ�����
            cout<<arr[i]<<" ";

        }
        cout<<endl;
    }
    else
    {
        for(i = k ; i <=m;i++)
        {  //�ݹ鲿��
            swap(arr[k],arr[i]);
            perm(arr,k+1,m);
            /*�����鿴��1��234��+2��134��+3��124��+4��123��
            �ٰѣ�234������2��34��+3��24��+4��23��
            һֱ�����廯Ϊ���֣�һֱ�Ѵ�����ֽ��С���⡣*/
            swap(arr[k],arr[i]);
        }
    }
}

int main()
{
    char arr[] ="1234";
    perm(arr,0,3);
    return 0;
}

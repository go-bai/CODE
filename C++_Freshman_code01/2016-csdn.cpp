#include <iostream>

using namespace std;

int main()
{
    int n,min,temp,j;
    while (cin>>n&&n!=0)
    {
        int *p= new int[n];//����ָ�벢ָ����new��̬�����СΪn�Ŀռ�
        for (int i=0;i<n;i++)
        {
            cin>>p[i];
            if (i==0)
            {
                min=p[0];
                j=0;
            }
            else
            {
                if (p[i]<min)
                {
                    min=p[i];
                    j=i;
                }
            }

        }
        temp=p[0];
        p[0]=min;
        p[j]=temp;
        for (int i=0;i<n;i++)
        {
            if (i!=0)
            {
                cout<<" ";//������֮���ÿո�ֿ�
            }
            cout<<p[i];
        }
        cout<<endl;
        delete p;//����delete�ͷſռ�
    }
    return 0;
}

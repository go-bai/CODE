#include<iostream>
using namespace std;

int main()
{
    int num;
    int arr[100];

    while(cin>>num&&num!=0)
    {
        int i=0;
        int n=num;
        while(num--)
        {
            cin>>arr[i];
            i++;

        }
        int min=arr[0];
        int jilu=0;//��¼��Сֵ�������±�
        for(int i=1; i<n; i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
                jilu=i;//��¼ʵ�ֵ�λ��
            }
        }
        int temp;
        temp=arr[0];
        arr[0]=arr[jilu];
        arr[jilu]=temp;

        int lcount=0;//��������������������֮��һ���ո�
        for(int i=0; i<n; i++)
        {
            if(lcount>0)
                cout<<" ";
            cout<<arr[i];
            lcount++;
        }
        cout<<endl;


    }
}

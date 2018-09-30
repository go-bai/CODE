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
        int jilu=0;//记录最小值的数组下标
        for(int i=1; i<n; i++)
        {
            if(min>arr[i])
            {
                min=arr[i];
                jilu=i;//记录实现的位置
            }
        }
        int temp;
        temp=arr[0];
        arr[0]=arr[jilu];
        arr[jilu]=temp;

        int lcount=0;//控制输出的来年各个数字之间一个空格
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

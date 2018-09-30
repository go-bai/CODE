#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            int arr[3]={0,0,1};
            int a;//a代表新生母牛数
            int sum=1;//sum代表母牛总数
            for(int i=1;i<n;i++)
            {
                a=arr[2];
                sum+=a;


                arr[2]=arr[1]+arr[2];
                arr[1]=arr[0];
                arr[0]=a;
            }
            cout<<sum<<endl;
        }
    }
}

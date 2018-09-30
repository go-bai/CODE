#include<iostream>
//超级楼梯，要用到递归
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int arr[41];
        arr[1]=0;
        arr[2]=1;
        arr[3]=2;
        int m;
        cin>>m;
        for(int i=4; i<=m; i++)
        {
            arr[i]=arr[i-1]+arr[i-2];

        }
        cout<<arr[m]<<endl;
        n--;
    }


}

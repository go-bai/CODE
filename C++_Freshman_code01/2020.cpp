#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int num,n;
    int arr[100];
    while(cin>>n&&n!=0)
    {
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(abs(arr[j])<abs(arr[j+1]))
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

            }
        }
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout<<arr[i];
            else
            cout<<" "<<arr[i];
        }
        cout<<endl;
    }
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int arr[100][100];
    int m,n;
    int num;
    while(cin>>m>>n)
    {
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin>>arr[i][j];
            }
        }//双重for循环把数据存到二位数组中

        int x=1;
        int y=1;
        int lmax=0;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(abs(lmax)<abs(arr[i][j]))
                {
                    lmax=arr[i][j];
                    x=i;
                    y=j;
                }
            }
        }
        cout<<x<<" "<<y<<" "<<arr[x][y]<<endl;
    }
}










/*
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,val;
    int a[100][100];
    while(cin>>m>>n)
    {
        for(int x=1; x<=m; x++)
            for(int y=1; y<=n; y++)
            {
                cin>>val;
                a[x][y]=val;//第x行y列的数据
            }
        int maxx=1;
        int maxy=1;
        int max=0;
        for(int x=1; x<=m; x++)
            for(int y=1; y<=n; y++)
            {
                if(abs(a[x][y])>abs(max))
                {
                    max=a[x][y];
                    maxx=x;
                    maxy=y;
                }
            }
        cout<<maxx<<" "<<maxy<<" "<<max<<endl;
    }
    return 0;
}

*/

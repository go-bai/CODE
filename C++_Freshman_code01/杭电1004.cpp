#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    char arr[1000][15];//用来存储那些颜色
    int lcount[1000];//用来存储每种颜色出现的次数，在每次存入颜色的时候将对应位置初始化为零，然后遍历比较，每次有相同的而就++
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(int i=1; i<=n; i++)
        {
            cin>>arr[i];
            lcount[i]=0;
        }

        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(strcmp(arr[i],arr[j])==0)
                    lcount[i]++;
            }
        }
        int lmax=lcount[1];
        int flag=1;
        for(int i=1; i<=n; i++)
        {
            if(lcount[i]>lmax)
            {
                lmax=lcount[i];
                flag=i;
            }
        }
        cout<<arr[flag]<<endl;


    }
}

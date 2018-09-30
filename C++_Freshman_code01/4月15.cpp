#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x;
    int y;
    cin>>x>>y;
    int bcount=0;
    for(int i=x; i<=y; i++)
    {
        int temp=(i*i+i+41);
        for(int j=2; j<=sqrt(temp); j++)
        {
            if(temp%j==0)
            {
                bcount++;
                break;
            }
        }
    }
    cout<<bcount;
}

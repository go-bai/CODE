#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin>>n&&n!=0)
    {
        int sum=0;
        int num;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            sum+=num/100;
            num%=100;
            sum+=num/50;
            num%=50;
            sum+=num/10;
            num%=10;
            sum+=num/5;
            num%=5;
            sum+=num/2;
            num%=2;
            sum+=num/1;
            num%=1;
        }
        cout<<sum<<endl;
    }
}

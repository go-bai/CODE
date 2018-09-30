#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int a;
        cin>>a;
        int temp=3;//ÑòµÄÊıÁ¿
        for(int i=1;i<=a;i++)
        {
            temp=(temp-1)*2;
        }
        cout<<temp<<endl;
        n--;
    }
}

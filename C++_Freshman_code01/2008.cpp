#include<iostream>
using namespace std;
int main()
{
    int n;
    double num;
    while(cin>>n)
    {
        if(n==0)
            break;
        int a=0,b=0,c=0;
        for(int i=1;i<=n;i++)
        {
            cin>>num;
            if(num<0)
                a+=1;
            else if(num==0)
                b+=1;
            else if(num>0)
                c+=1;
        }
        cout<<a<<" "<<b<<" "<<c<<endl;

    }
}

#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n>0)
    {
        char arr[100];
        cin.getline(arr,100);
        int len=strlen(arr);
        int b=len/2;
        int flag=1;
        if(len%2==0)
        {
            for(int i=0; i<b; i++)
            {
                if(arr[i]!=arr[2*b-i-1])
                {
                    flag=0;
                    break;
                }
            }
        }
        else
        {
            for(int i=0; i<b; i++)
            {
                if(arr[i]!=arr[2*b-i])
                {
                    flag=0;
                    break;
                }
            }
        }

        if(flag)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
        n--;

    }
}

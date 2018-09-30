#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    getchar();
    while(n>0)
    {

        char arr[50];
        gets(arr);
        int len;
        len=strlen(arr);
        if(arr[0]=='_'||(arr[0]>='a'&&arr[0]<='z')||(arr[0]>='A'&&arr[0]<='Z'))
        {
            if(len==1)
                cout<<"yes"<<endl;
            else
            {
                int flag=0;
                for(int i=1; i<len; i++)
                {
                    if(arr[i]=='_'||(arr[i]>='a'&&arr[i]<='z')||(arr[i]>='A'&&arr[i]<='Z')||(arr[i]>='0'&&arr[i]<='9'))
                        continue;
                    else
                        flag=1;
                }
                if(flag)
                    cout<<"no"<<endl;
                else
                    cout<<"yes"<<endl;
            }

        }
        else
            cout<<"no"<<endl;
        n--;

    }
}

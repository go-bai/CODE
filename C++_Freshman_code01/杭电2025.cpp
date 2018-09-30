#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char arr[101];
    while(gets(arr))
    {
        int len=strlen(arr);
        int temp=arr[0];
        for(int i=1;i<len;i++)
        {
            if(temp<arr[i])
                temp=arr[i];
        }
        for(int j=0;j<len;j++)
        {
            if(arr[j]==temp)
                cout<<arr[j]<<"(max)";
            else
                cout<<arr[j];

        }
        cout<<endl;
    }
}

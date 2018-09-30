#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int lcount;
    getchar();
    while(n>0)
    {
        char arr[10000];

        gets(arr);
        lcount=0;
        int len=strlen(arr);
        for(int i=0;i<=len;i++)
        {
            if(arr[i]<0)
                lcount++;
        }

        cout<<lcount/2<<endl;
        n--;
    }
}

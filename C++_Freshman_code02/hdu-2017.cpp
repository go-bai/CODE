#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char arr[1000];
        cin>>arr;
        int lcount=0;
        int len=strlen(arr);
        for(int i=0; i<len; i++)
            if(arr[i]>='0'&&arr[i]<='9')
                lcount++;
        cout<<lcount<<endl;
    }
}

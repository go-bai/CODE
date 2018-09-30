#include<iostream>
#include<string.h>


using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        char arr[51];
        cin>>arr;
        int a=0,b=0,c=0,d=0;
        int len=strlen(arr);
        for(int i=0; i<len; i++)
        {
            if(arr[i]>='0'&&arr[i]<='9')
                a=1;
            if(arr[i]>='a'&&arr[i]<='z')
                b=1;
            if(arr[i]>='A'&&arr[i]<='Z')
                c=1;
            if(arr[i]=='~'||arr[i]=='!'||arr[i]=='@'||arr[i]=='#'||arr[i]=='$'||arr[i]=='%'||arr[i]=='^')
                d=1;
        }
        if((a+b+c+d)>2&&(len>=8&&len<=16))
            cout<<"YES";
        else
            cout<<"NO";
            cout<<endl;
    }

}

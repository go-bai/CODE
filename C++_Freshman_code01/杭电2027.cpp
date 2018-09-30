#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char arr[100];
    getchar();
    while(n>0)
    {

        int a=0,e=0,i=0,o=0,u=0;
        cin.getline(arr,100);
        int len=strlen(arr);
        for(int j=0; j<len; j++)
        {
            if(arr[j]=='a')
                a++;
            else if(arr[j]=='e')
                e++;
            else if(arr[j]=='i')
                i++;
            else if(arr[j]=='o')
                o++;
            else if(arr[j]=='u')
                u++;
        }
        cout<<"a:"<<a<<endl;
        cout<<"e:"<<e<<endl;
        cout<<"i:"<<i<<endl;
        cout<<"o:"<<o<<endl;
        cout<<"u:"<<u<<endl;

        n--;
        if(n>0)
            cout<<endl;


    }
}


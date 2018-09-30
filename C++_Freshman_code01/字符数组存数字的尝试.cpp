//intput 12345678
//output 7531 8642

#include<iostream>
#include<string>
using namespace std;
int main()
{
    int length;
    string str;
    cin>>str;
    length=str.size();

    if(length%2==0)
    {
        for(int j=length-2; j>=0; j-=2)
            cout<<str[j];
        cout<<" ";

        for(int i=length-1; i>=0; i-=2)
            cout<<str[i];
    }
    if(length%2!=0)
    {
        for(int i=length-1; i>=0; i-=2)
            cout<<str[i];
        cout<<" ";
        for(int j=length-2; j>=0; j-=2)
            cout<<str[j];
    }
}

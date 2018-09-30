#include<iostream>
using namespace std;
string multiple(int a,int b)
{
    //char *c="true";
    //char *d="false";
    if(b%a==0)
        return "true";
    else
        return "false";
}


int main()
{
    int a,b;
    while(cin>>a>>b)
    {
       cout<< multiple(a,b)<<endl;
    }


}

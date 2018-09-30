#include<bits/stdc++.h>
using namespace std;
int main()
{
    int v1,v2,v3,vm;
    cin>>v1>>v2>>v3>>vm;
    if((vm>2*v3)||(v3>2*vm)||(vm>=v2))cout<<"-1"<<endl;
    else
    {
        v3=max(v3,vm);//v3为三辆车中最小的体积
        cout<<max(2*v2+1,v1)<<"\n"<<max(2*v3+1,v2)<<"\n"<<v3<<endl;
    }
    return 0;
}

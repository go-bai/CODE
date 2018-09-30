#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n,m,arr[100];
    cout<<"Input n,m:";
    cin>>n>>m;
    for(int i=m; i<n; i++)
        cin>>arr[i];
    for(int i=0; i<m; i++)
        cin>>arr[i];
    cout<<"After move:";
    for(int i=0; i<n; i++)
        cout<<setw(5)<<arr[i];
}


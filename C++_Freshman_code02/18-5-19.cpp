#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>s;
    int n;
    cin>>n;
    int temp;
    while(n>0)
    {
        temp=n%10;
        s.push(temp);
        n/=10;
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
/*



*/

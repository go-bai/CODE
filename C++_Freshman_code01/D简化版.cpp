#include<iostream>
#include<algorithm>
using namespace std;
long long gcd(long long a,long long b) {
    return b==0?a:gcd(b,a%b);
}
int main() {
    long long N;
    cin>>N;
    while(N--)
        {
        long long n;
        cin>>n;
        long long bei,num;
        cin>>bei;
        n--;
        while(n--)
        {
            cin>>num;
            bei=bei*num/gcd(bei,num);
        }
        cout<<bei<<endl;
    }
}

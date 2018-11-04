/*
��ȡ��
��;������һ������arr��һ����s���������������һ�����䣬ʹ���������֮�͵���s������ڶ������ĺͶ���s
�����������䶯
1,��һ�Խű�i��j,�ʼ��ָ���һ��Ԫ�ء�һ����¼����i��j�͵�sum
2,�������i��j֮�ͱ�sС����ô����j����Ųһλ,j++,����sum+=arr[j]
3,�������i��j֮�ʹ��ڵ���s����ô����sun-=arr[i],����i���Ųһλ,i++(˳���ܱ�,�Լ���һ���������)
*/
#include<iostream>
#include<vector>
using namespace std;
const int maxn=10000+10;
vector<int>prime;
vector<bool>is_prime;
void init_primes() {
    //int m=sqrt(maxn+0.5);
    is_prime = vector<bool>(maxn+1,true);//��0��maxn+1��push_back��true///̫ǿ���ˣ���ǰ��֪��
    is_prime[0]=is_prime[1]=false;
    for(int i=2; i<=maxn; i++)
        if(is_prime[i]) {
            prime.push_back(i);
            for(int j=i*i; j<=maxn; j+=i) is_prime[j]=false;
        }
}

int main() {
    int n;
    init_primes();
    while(cin>>n&&n) {//Ȼ����ǳ�ȡ������
        int i=0,j=0,sum=prime[0],ans=0;
        while(i<=j&&j<=n){
            if(sum>=n){
                if(sum==n) ans++;
                sum-=prime[i];
                i++;
            }
            else j++,sum+=prime[j];
        }
        cout<<ans<<endl;
    }
    return 0;
}

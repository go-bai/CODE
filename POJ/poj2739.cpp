/*
尺取法
用途：给定一个数组arr和一个数s，在这个数组中找一个区间，使得这个区间之和等于s，会存在多个区间的和都是s
类似于蚯蚓的蠕动
1,用一对脚标i和j,最开始都指向第一个元素。一个记录区间i到j和的sum
2,如果区间i到j之和比s小，那么就让j往后挪一位,j++,并把sum+=arr[j]
3,如果区间i到j之和大于等于s，那么就让sum-=arr[i],并让i向后挪一位,i++(顺序不能变,自己想一遍就明白了)
*/
#include<iostream>
#include<vector>
using namespace std;
const int maxn=10000+10;
vector<int>prime;
vector<bool>is_prime;
void init_primes() {
    //int m=sqrt(maxn+0.5);
    is_prime = vector<bool>(maxn+1,true);//从0到maxn+1都push_back进true///太强大了，以前不知道
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
    while(cin>>n&&n) {//然后就是尺取法求了
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

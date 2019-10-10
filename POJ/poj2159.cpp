#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    int cnt1[26],cnt2[26];
    cin>>s1>>s2;
    int len=s1.length();
    memset(cnt1,0,sizeof cnt1);
    memset(cnt2,0,sizeof cnt2);
    for(int i=0;i<len;i++){
        cnt1[s1[i]-'A']++;
        cnt2[s2[i]-'A']++;
    }
    sort(cnt1,cnt1+26);
    sort(cnt2,cnt2+26);
    int blog=1;
    for(int i=0;i<26;i++){
        if(cnt1[i]!=cnt2[i]){
            blog=0;break;
        }
    }
    if(blog) cout<<"YES\n";
    else cout<<"NO\n";
}

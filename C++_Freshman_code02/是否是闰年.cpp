#include<iostream>
#include<cmath>
#include<climits>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<cstring>
#include<cstdio>
using namespace std;
int main()
{
    int num;
    cin>>num;
    if((num%4==0&&num%100!=0)||num%400==0)
        cout<<"YES";
    else
        printf("NO");
}

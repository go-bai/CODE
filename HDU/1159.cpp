#include<iostream>
#include<cstring>
using namespace std;
const int maxn = 1e3;
int dp[maxn][maxn];
int longestCommonSubsequence(string X, string Z) {
    int lenX = X.length();
    int lenZ = Z.length();
    for(int i = 0; i < lenX; ++i) {
        for(int j = 0; j < lenZ; j++) {
            dp[i][j] = 0;
        }
    }
    for(int i = 1; i <= lenX; ++i) {
        for(int j = 1; j <= lenZ; j++) {
            if(X[i-1] == Z[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
        }
    }
    return dp[lenX][lenZ];
}
int main() {
    string X, Z;
    while(cin >> X && cin >> Z) {
        cout << longestCommonSubsequence(X, Z) << endl;
    }
}
/*
最长公共子序列
*/
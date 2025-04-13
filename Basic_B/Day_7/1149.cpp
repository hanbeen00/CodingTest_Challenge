#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1001][3];
int r,g,b;


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> r >> g >> b;
        dp[i][0] = min(dp[i-1][1], dp[i-1][2]) + r;
        dp[i][1] = min(dp[i-1][0], dp[i-1][2]) + g;
        dp[i][2] = min(dp[i-1][0], dp[i-1][1]) + b;
    }
    cout << min(dp[n][2], min(dp[n][0], dp[n][1])) << endl;
}
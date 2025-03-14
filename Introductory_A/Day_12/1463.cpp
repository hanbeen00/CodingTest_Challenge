#include <bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin >> n; 

    int DP[1000000];
    
   
    for (int i = 2; i <= n; i++) {
            // 1. 1을 뺀다.
            DP[i] = DP[i - 1] + 1;
    
            // 2. 2로 나누어지면
            if (i % 2 == 0) {
                DP[i] = min(DP[i], DP[i / 2] + 1);
            }
    
            // 3. 3으로 나누어지면
            if (i % 3 == 0) {
                DP[i] = min(DP[i], DP[i / 3] + 1);
            }
    }
    cout << DP[n];
    
    return 0;
}
    
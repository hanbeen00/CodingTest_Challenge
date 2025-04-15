#include <bits/stdc++.h>
using namespace std;
int n;
int result = 0;

vector<tuple<int, int, int>> v;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, b, c});
    }

    for(int i = 123; i<=987; i++){
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if(a == b || a == c || b == c) continue;
        if(a == 0 || b == 0 || c == 0) continue;

        for(int i=0;i<n;i++){
            int tmp = get<0>(v[i]);
            int strike = get<1>(v[i]);
            int ball = get<2>(v[i]);

            int tmp_a = tmp / 100;
            int tmp_b = (tmp / 10) % 10;
            int tmp_c = tmp % 10;

            int strike_cnt = 0;
            int ball_cnt = 0;

            if(tmp_a == a) strike_cnt++;
            if(tmp_b == b) strike_cnt++;
            if(tmp_c == c) strike_cnt++;
            if(tmp_a == b || tmp_a == c) ball_cnt++;
            if(tmp_b == a || tmp_b == c) ball_cnt++;
            if(tmp_c == a || tmp_c == b) ball_cnt++;

            if(strike_cnt != strike || ball_cnt != ball){
                break;
            }
            if(i == n-1){
                result++;
            }
        }
    }
    cout << result << endl;
    return 0;   
}
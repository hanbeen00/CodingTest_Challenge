#include <bits/stdc++.h>
using namespace std;

int t;
int n;
int cnt=0;
int result =0;

void findsum(int n, int cnt){
    if(cnt>=n){
        if(cnt==n){
            result++;
        }
        return;
    }
    findsum(n, cnt+1);
    findsum(n, cnt+2);
    findsum(n, cnt+3);

}   

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++){
        cnt = 0;
        cin >> n;
        findsum(n, cnt);
        cout << result << "\n";
        result = 0;
    }
}
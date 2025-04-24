#include <bits/stdc++.h>
using namespace std;

long n, k;
long arr[10005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    long tmp = 0;
    for(long i = 0; i < n; i++){
        cin >> arr[i];
        tmp += arr[i];
    }
    long right = tmp / k;
    long left = 1;

    //cout << "left: " << left << " right: " << right << endl;
    long result = 0;
    while(left <= right){
        long mid = (left + right) / 2;
        long cnt = 0;
        for(long i = 0; i < n; i++){
            cnt += arr[i] / mid;
        }

        //cout <<"left: "<< left <<"right: " << right << "mid: " << mid << " cnt: " << cnt << endl;

        if(cnt < k){
            right = mid - 1;
        } else {
            result = mid;
            left = mid + 1;
        }
    }
    cout << result << endl;
}
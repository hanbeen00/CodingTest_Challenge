#include <bits/stdc++.h>
using namespace std;


int tree[1000005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    long m;
    cin >> n >> m;
    int max_h = 0;

    for(int i = 0; i < n; i++){
        cin >> tree[i];
        max_h = max(max_h, tree[i]);
    }

    long left = 0, right = max_h;
    long result = 0;

    while(left <= right){
        long mid = (left + right) / 2;
        long sum = 0;

        for(int i = 0; i < n; i++){
            if(tree[i] > mid){
                sum += (tree[i] - mid);
            }
        }

        if(sum >= m){
            result = mid;
            left = mid + 1;  
        } else {
            right = mid - 1; 
        }
    }

    cout << result << '\n';
}

#include <bits/stdc++.h>
using namespace std;

long arr[100005];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int left = 0, right = n - 1;
    int result_left = 0, result_right = n - 1;
    long min = 2000000005;
    while(left < right){
        long sum = arr[left] + arr[right];
        if(abs(sum) <= abs(min)){
            min = sum;
            result_left = left;
            result_right = right;
        }
        if(sum < 0){
            left++;
        } else {
            right--;
        }
    }
    cout << arr[result_left] << " " << arr[result_right] << "\n";
}
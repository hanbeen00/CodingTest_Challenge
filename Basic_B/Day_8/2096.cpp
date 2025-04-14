#include <bits/stdc++.h>
using namespace std;

int n;
int dpmax[2][3];
int dpmin[2][3];
int arr[100001][3];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        dpmax[1][0] = arr[i][0] + max(dpmax[0][0], dpmax[0][1]);
        dpmax[1][1] = arr[i][1] + max(max(dpmax[0][0], dpmax[0][1]), dpmax[0][2]);
        dpmax[1][2] = arr[i][2] + max(dpmax[0][1], dpmax[0][2]);
        dpmax[0][0] = dpmax[1][0];
        dpmax[0][1] = dpmax[1][1];
        dpmax[0][2] = dpmax[1][2];

        dpmin[1][0] = arr[i][0] + min(dpmin[0][0], dpmin[0][1]);
        dpmin[1][1] = arr[i][1] + min(min(dpmin[0][0], dpmin[0][1]), dpmin[0][2]);
        dpmin[1][2] = arr[i][2] + min(dpmin[0][1], dpmin[0][2]);
        dpmin[0][0] = dpmin[1][0];
        dpmin[0][1] = dpmin[1][1];
        dpmin[0][2] = dpmin[1][2];
    }
    cout << max(dpmax[0][2], max(dpmax[0][0], dpmax[0][1])) << " ";
    cout << min(dpmin[0][2], min(dpmin[0][0], dpmin[0][1])) << endl;
}
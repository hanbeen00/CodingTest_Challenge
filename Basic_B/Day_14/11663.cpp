#include <bits/stdc++.h>
using namespace std;

int n, m;
int point[100001];

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m;
    for (int i = 0; i < n; i++){
        cin >> point[i];
    }
    sort(point, point + n);

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;

        int start = 0;
        int end = n - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if (point[mid] < a){
                start = mid + 1;
            } 
            else{
                end = mid - 1;
            }
        }
        int result1 = start;

        start = 0;
        end = n - 1;
        while(start <= end){
            int mid = (start + end) / 2;
            if(point[mid] > b){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            } 
        }
        int result2 = end+1;

        int count = result2 - result1;
        cout << count << "\n";
    }
}
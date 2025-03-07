#include <bits/stdc++.h>
using namespace std;

int n, k;
int tmp;
vector<int> v;

int main(){
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back(tmp);
    }

    sort(v.begin(), v.end());

    tmp = 0;
    for(int i=n-1 ; i>=0; i--){
        tmp++;
        if(k==tmp){
            cout << v[i] << endl;
        }
    }
}
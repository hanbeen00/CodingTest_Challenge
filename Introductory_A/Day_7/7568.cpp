#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> v;
int n;

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        int x,y;
        int rank=1;
        cin >> x >> y;
        v.push_back({x, y, rank});
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((get<0>(v[i]) < get<0>(v[j])) && (get<1>(v[i]) < get<1>(v[j]))){
                get<2>(v[i])++;
            }
        }
    }

    for(int i=0; i<n; i++){
        cout << get<2>(v[i]) << " ";
    }
}
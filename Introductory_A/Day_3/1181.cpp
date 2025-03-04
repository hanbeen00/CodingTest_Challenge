#include <bits/stdc++.h>
using namespace std;

int n;
string tmp;
vector<pair<int, string>> v;

bool f(const pair<int,string> &a, const pair<int,string> &b){
    if(a.first == b.first){
        return a.second < b.second;
    }
    return a.first < b.first;
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> tmp;
        v.push_back({tmp.size(),tmp});
    }

    sort(v.begin(), v.end(), f);

    for(int i=0; i<n; i++){
        if(i==0 || (v[i].second != v[i-1].second)){
            cout << v[i].second << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n;
string name;
int y,m,d;
vector<tuple<int, int, int, string>> v;

bool f(const tuple<int, int, int, string> &a, const tuple<int, int, int, string> &b){
    if(get<0>(a) == get<0>(b)){
        if(get<1>(a) == get<1>(b)){
            return get<2>(a) < get<2>(b);
        }
        else{
            return get<1>(a) < get<1>(b);
        }
    }
    else{
        return get<0>(a) < get<0>(b);
    }
}

int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> name >> d >> m >> y;
        v.push_back({y,m,d,name});
    }

    sort(v.begin(),v.end(),f);

    cout << get<3>(v[n-1]) << endl;
    cout << get<3>(v[0]) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, string>> v;
int n;
string name;
int num;

bool f(const tuple<int, int, string>&a , const tuple<int, int, string> &b){
    if(get<0>(a) == get<0>(b) ){
        return get<1>(a) < get<1>(b);
    }

    else{
        return get<0>(a) < get<0>(b);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for(int i=0; i<n;i++){
      cin >> num >> name;
      v.push_back({num, i, name});
    }

    sort(v.begin(), v.end(), f);

    for(int i=0; i<n;i++){
        cout << get<0>(v.at(i)) << " " << get<2>(v.at(i)) << endl;
    }
}
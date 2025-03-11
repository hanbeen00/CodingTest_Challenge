#include <bits/stdc++.h>
using namespace std;
int n;

long v[1000];

void fibo(long *v){
    for(int i=2;i<=n;i++){
        v[i] = v[i-1] + v[i-2];
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    v[0] = 0;
    v[1] = 1;
    if(n>1){
        fibo(v); 
    }
    cout << v[n] << endl;
}
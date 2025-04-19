#include <bits/stdc++.h>
using namespace std;

int n,m;
int x[100005];

int main(){
    cin >> n;
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> x[i];
    }
    
    int max = -1;

    for(int i = 0; i<m; i++){
        if(i==0){
            max = x[i];
        }
        else{
            max = (max < ceil(double(x[i]-x[i-1])/2)) ? ceil(double(x[i]-x[i-1])/2) : max;
        }
    }
    max = (max < n-x[m-1]) ? n-x[m-1] : max;

    cout << max << endl;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    long zero = 0;
    long one = 1;

    for(int i=1; i<=n; i++){
        //cout << i << " " <<  one << " " << zero << endl;
        long tmp1= zero;
        long tmp2= one;

        if(i!=n){
            one = tmp1;
            zero = zero + tmp2;
        }

    }

    cout << one + zero << "\n";
}
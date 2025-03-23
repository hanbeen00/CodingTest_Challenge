#include <bits/stdc++.h>
using namespace std;

bool arr[1005] = {false, };  

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    
    int index = 0;  

    cout << "<";
    for(int i = 1; i <= n; i++){  
        int cnt = 0; 

        while (true) {
            index++; 
            if (index > n) index = 1;  

            if (!arr[index]) cnt++;  

            if (cnt == k) { 
                arr[index] = true;
                break;
            }
        }
        if(i==n){
            cout << index; 
        }
        else{
            cout << index << ", ";  
        }
    }
    cout << ">" << "\n";

    return 0;
}

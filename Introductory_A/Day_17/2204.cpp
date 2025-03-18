#include <bits/stdc++.h>
using namespace std;

int n;
string arr[1005];

bool compare(const string &first, const string &second) {
    string f = first, s = second;
    
    transform(f.begin(), f.end(), f.begin(), ::tolower);
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    if (f != s) {
        return f < s; 
    }
    return first < second;
}

int main() {
    while (true) {
        cin >> n;
        if (n == 0) break;  

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n, compare);
        cout << arr[0] << endl;
    }
}

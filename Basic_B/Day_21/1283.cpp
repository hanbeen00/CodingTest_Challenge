#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> s;
char used[256]; 
int ans_cnt[35];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);
        s.push_back(str);
        ans_cnt[i] = -1; 
    }

    for (int i = 0; i < n; i++) {
        string str = s[i];
        int len = str.length();
        bool found = false;

        for (int j = 0; j < len; j++) {
            if (j == 0 || str[j-1] == ' ') {
                char tmp = str[j];
                if (tmp >= 'A' && tmp <= 'Z') tmp += 32;

                if (!used[tmp]) {
                    used[tmp] = 1;
                    ans_cnt[i] = j;
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            for (int j = 0; j < len; j++) {
                if (str[j] == ' ') continue;

                char tmp = str[j];
                if (tmp >= 'A' && tmp <= 'Z') tmp += 32;

                if (!used[tmp]) {
                    used[tmp] = 1;
                    ans_cnt[i] = j;
                    found = true;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        string str = s[i];
        int len = str.length();
        int idx = ans_cnt[i];

        for (int j = 0; j < len; j++) {
            if (j == idx) cout << '[' << str[j] << ']';
            else cout << str[j];
        }
        cout << "\n";
    }
}

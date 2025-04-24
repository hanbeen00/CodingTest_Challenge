#include <bits/stdc++.h>
using namespace std;

int a, k;
bool visited[1000005];

int bfs(int start) {
    queue<pair<int, int>> q;
    q.push({start, 0});
    visited[start] = true;

    while (!q.empty()) {
        
        int x = q.front().first;
        int cnt = q.front().second;
        q.pop();

        if (x == k) return cnt;

        if (x + 1 <= k && !visited[x + 1]) {
            visited[x + 1] = true;
            q.push({x + 1, cnt + 1});
        }
        if (x * 2 <= k && !visited[x * 2]) {
            visited[x * 2] = true;
            q.push({x * 2, cnt + 1});
        }
    }
    return -1;
}

int main() {
    cin >> a >> k;
    cout << bfs(a) << endl;
}

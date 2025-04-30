#include <bits/stdc++.h>
using namespace std;

int n;
int visited[1005];
int a[1005];

void bfs(int i){
    queue<int> q;
    q.push(i);
    visited[i] = 0;

    while(!q.empty()){
        int cur = q.front(); 
        q.pop();
        for(int j = 1; j <= a[cur]; j++){ 
            int next = cur + j;
            if(next >= n) continue;
            if(visited[next] == -1){
                visited[next] = visited[cur] + 1;
                q.push(next);
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        visited[i] = -1;
    }
    bfs(0);
    cout << visited[n-1] << "\n";
    return 0;
}
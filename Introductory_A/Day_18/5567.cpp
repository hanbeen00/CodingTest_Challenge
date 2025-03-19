#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> g[505];
int visited[505];
int result=0;

void BFS(int index){
    queue<int> q;
    visited[index] = 1;
    q.push(index);
    while(q.size()){
        int cnt = q.front();
        q.pop();
        for(int i = 0; i < g[cnt].size(); i++){
            if(visited[g[cnt][i]]) continue;
            visited[g[cnt][i]] = visited[cnt] + 1;
            if(visited[cnt]<=2) result++;
            q.push(g[cnt][i]);
        }
    }
}

int main(){
    cin >> n;
    cin >> m;
    for(int i=0; i<m; i++){
        int u,v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    //cout << "ddddddd" << endl;

    BFS(1);
    cout << result << endl;

}
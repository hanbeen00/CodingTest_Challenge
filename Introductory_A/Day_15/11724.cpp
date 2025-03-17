#include <bits/stdc++.h>
using namespace std;

vector<int> graph[1005];
bool visited[1005];
int n,m;

void DFS(int index){
    visited[index]=true;
    for(int i=0; i<graph[index].size();i++){
        if(visited[graph[index][i]]){
            continue;
        }
        DFS(graph[index][i]);
    }
}

int main(){
    cin >> n >> m;
    int u,v;
    int cnt=0;
    for(int i=0 ; i<m; i++){
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i=1; i<=n;i++){
        if(visited[i]){
            continue;
        }
        DFS(i);
        cnt++;
    }

    cout << cnt << endl;
}
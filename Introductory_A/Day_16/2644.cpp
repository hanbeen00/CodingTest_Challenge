#include <bits/stdc++.h>
using namespace std;

vector<int> v[105];
bool visited[105];
int n;
int m;
int first, second;
int cnt=0;
int result = -1; 

void DFS(int index){
    //cout << index << endl;
    visited[index] = true;
    if(index == second){
        result = cnt;
        return;
    }
    cnt++;
    for(int i=0; i<v[index].size();i++){
        if(visited[v[index][i]]){
            continue;
        }
        
        DFS(v[index][i]);
    }
    cnt--;
}

int main(){
    cin >> n;
    cin >> first >> second;
    cin >> m;

    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    DFS(first);

    cout << result << endl;
}
#include <bits/stdc++.h>
using namespace std;

int n;
int a, b, result = -1;
int bridge[10005];
bool isVisited[10005];

void BFS(int a){
    queue<pair<int, int>> q;
    q.push({a, 0});
    isVisited[a] = true;

    while(!q.empty()){
        int cur = q.front().first;
        int jump = q.front().second;
        int interval = bridge[cur];
        q.pop();

        if(cur == b){
            result = jump;
            return;
        }

        for(int i = 1; cur + (interval * i) <= n; i++){
            int next = cur + (interval * i);
            if(!isVisited[next]){
                isVisited[next] = true;
                q.push({next, jump + 1});
                //cout << next << jump + 1 << endl;
            }
        }

        for(int i = 1; cur - (interval * i) >= 1; i++){
            int next = cur - (interval * i);
            if(!isVisited[next]){
                isVisited[next] = true;
                q.push({next, jump + 1});
                //cout << next << jump + 1 << endl;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> bridge[i];
    }
    cin >> a >> b;

    BFS(a);
    cout << result;
}
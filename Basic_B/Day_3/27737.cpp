#include <bits/stdc++.h>
using namespace std;

int arr[105][105];
bool visited[105][105];
int m,n,k;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int cnt=0;
int ans = 0;

void dfs(int y, int x){
    cnt++;
    for(int i=0;i<4;i++){
        int nextX = x+dx[i];
        int nextY = y+dy[i];

        if(nextX<0||nextY<0||nextX>=n||nextY>=n){
            continue;
        }

        if(!visited[nextY][nextX]&&arr[nextY][nextX]==0){ 
            visited[nextY][nextX]=true;
            dfs(nextY,nextX);
        }
    }
}

int main(){
    cin >> n >> m >> k;
    int tmp = m;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j]==false&&arr[i][j]==0){
                visited[i][j]=true;
                dfs(i,j);
                //cout << cnt << endl;
                m -= (cnt%k==0 ? cnt/k : cnt/k+1);
                //cout << m << endl;
                cnt=0;
            }
        }
    }

    if(m<0 || m == tmp){
        cout << "IMPOSSIBLE";
    }
    else{
        cout << "POSSIBLE" << '\n' << m;
    }
}
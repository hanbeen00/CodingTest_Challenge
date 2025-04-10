#include <bits/stdc++.h>
using namespace std;

int arr[105][105];
bool visited[105][105];
int n;
int cnt=0;
int cnt2=0;

int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

void dfs(int y, int x){
    for(int i=0;i<4;i++){
        int nextX = x+dx[i];
        int nextY = y+dy[i];

        if(nextX<0||nextY<0||nextX>=n||nextY>=n){
            continue;
        }

        if(!visited[nextY][nextX]&&arr[nextY][nextX]==arr[y][x]){
            visited[nextY][nextX]=true;
            dfs(nextY,nextX);
        }
    }
}



int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            char tmp;
            cin >> tmp;
            if(tmp == 'R'){
                arr[i][j] = 0;
            }
            else if(tmp == 'G'){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = 2;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == false){
                visited[i][j] = true;
                dfs(i,j);
                cnt++;
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == 1){
                arr[i][j] = 0;
            }
            visited[i][j] = false;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(visited[i][j] == false){
                visited[i][j] = true;
                dfs(i,j);
                cnt2++;
            }
        }
    }

    cout << cnt << " " << cnt2 << endl;
}
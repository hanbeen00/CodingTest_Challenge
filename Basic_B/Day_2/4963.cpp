#include <bits/stdc++.h>
using namespace std;

int w,h;
int Map[50][50];
int visited[50][50];
int dx[8]={1,1,0,-1,-1,-1,0,1},dy[8]={0,1,1,1,0,-1,-1,-1};

void dfs(int y, int x){
    for(int i=0;i<8;i++){
        int nextX=x+dx[i];
        int nextY=y+dy[i];
        
        if(nextX<0||nextY<0||nextX>=w||nextY>=h){
            continue;
        }    

        if(!visited[nextY][nextX]&&Map[nextY][nextX]){ 
            visited[nextY][nextX]=1;
            dfs(nextY,nextX);
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    while(1){
        int cnt=0;
        cin>>w>>h;
        if(!w&&!h)break; 

        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                cin>>Map[i][j];
            }
        }
        for(int i=0;i<h;i++){ 
            for(int j=0;j<w;j++){
                if(!visited[i][j]&&Map[i][j]){
                    visited[i][j]=1;
                    dfs(i,j);
                    cnt++; 
                }
            }
        }
        cout<<cnt<<"\n";
        memset(visited,0,sizeof(visited));
    }
}
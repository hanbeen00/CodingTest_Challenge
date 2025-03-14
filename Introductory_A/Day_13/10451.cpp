#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[1005] = {0,};
    bool visited[1005] = {false,};

    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int m;
        cin >> m;
        for(int j=1;j<=m;j++){
            cin >> arr[j];
            visited[j] = false;
        }

        int count=0;
        int cnt=1;
        while(1){
            if(cnt==m+1){
                break;
            }
            if(visited[cnt]==false){
                visited[cnt]=true;
                if(visited[arr[cnt]] == false){
                    cnt = arr[cnt];
                }
                else{
                    count++;
                    cnt = arr[cnt];
                }
            }
            else{
                cnt++;
            }
        }
        cout << count <<endl;
    }
}
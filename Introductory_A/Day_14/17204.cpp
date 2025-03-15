#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;


    int arr[160]={0,};
    bool visited[160] = {false};
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int cnt=0;
    int result=0;
    while(1){
        if(arr[cnt]==k){
            visited[k] = true;
            result++;
            break;
        }
        if(visited[cnt]==true){
            result = -1;
            break;
        }
        visited[cnt] = true;
        cnt = arr[cnt];
        result++;

        /*for(int i=0;i<n;i++){
            cout << visited[i] << " ";
        }
        cout<<endl;*/
    }
    cout << result << endl;;

}
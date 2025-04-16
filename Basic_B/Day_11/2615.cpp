#include <bits/stdc++.h>
using namespace std;

int arr[23][23];
bool result = false;

int main(){
    for(int i=1;i<20;i++){
        for(int j=1;j<20;j++){
            cin >> arr[i][j];
        }
    }

    for(int i=1;i<20;i++){
        for(int j=1;j<20;j++){
            if(arr[i][j] == 1){
                int cnt[4]= {0, 0, 0, 0};
                
                // 가로줄 오목
                int tmp=0;
                while(1){
                    if(arr[i][j-1]==1){
                        break;
                    }

                    if(arr[i][j+tmp] == 1){
                        cnt[0]++;
                        tmp++;
                        if(j+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                // 세로줄 오목
                tmp=0;
                while(1){
                    if(arr[i-1][j]==1){
                        break;
                    }

                    if(arr[i+tmp][j] == 1){
                        cnt[2]++;
                        tmp++;
                        if(i+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                // 우하향 대각선 오목
                tmp=0;
                while(1){
                    if(arr[i-1][j-1]==1){
                        break;
                    }

                    if(arr[i+tmp][j+tmp] == 1){
                        cnt[1]++;
                        tmp++;
                        if(j+tmp>19||i+tmp>19) break;
                    }
                    else{
                        break;
                    }

                }

                // 우상향 대각선 오목
                tmp=0;
                while(1){
                    if(arr[i+1][j-1]==1){
                        break;
                    }

                    if(arr[i-tmp][j+tmp] == 1){
                        cnt[3]++;
                        tmp++;
                        if(i-tmp<1||j+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                if(cnt[0] == 5 || cnt[1] == 5 || cnt[2] == 5|| cnt[3] == 5){
                    result = true;
                    cout << 1 << endl;
                    cout << i << " " << j << endl; 
                    break;
                }
            }

            if(arr[i][j] == 2){
                int cnt[4]= {0, 0, 0, 0};

                // 가로줄 오목
                int tmp=0;
                while(1){
                    if(arr[i][j-1]==2){
                        break;
                    }
                    if(arr[i][j+tmp] == 2){
                        cnt[0]++;
                        tmp++;
                        if(j+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                // 세로줄 오목
                tmp=0;
                while(1){
                    if(arr[i-1][j]==2){
                        break;
                    }
                    if(arr[i+tmp][j] == 2){
                        cnt[2]++;
                        tmp++;
                        if(i+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                // 우하향 대각선 오목
                tmp=0;
                while(1){
                    if(arr[i-1][j-1]==2){
                        break;
                    }
                    if(arr[i+tmp][j+tmp] == 2){
                        cnt[1]++;
                        tmp++;
                        if(j+tmp>19||i+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                // 우상향 대각선 오목
                tmp=0;
                while(1){
                    if(arr[i+1][j-1]==2){
                        break;
                    }

                    if(arr[i-tmp][j+tmp] == 2){
                        cnt[3]++;
                        tmp++;
                        if(i-tmp<1||j+tmp>19) break;
                    }
                    else{
                        break;
                    }
                }

                if(cnt[0] == 5 || cnt[1] == 5 || cnt[2] == 5|| cnt[3] == 5){
                    result = true;
                    cout << 2 << endl;
                    cout << i << " " << j << endl; 
                    break;
                }
                
            }
        }
    }

    //오목 없을 경우
    if(!result){
        cout << 0 << endl;
    }
    
    return 0;
}
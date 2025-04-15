#include <bits/stdc++.h>
using namespace std;

int m,n;
int x,y;
string order[1005];
int cnt[1005];
int turn_right = 0;
bool result = true;


int main(){
    cin >> m >> n;
    for(int i=0;i<n;i++){
        cin >> order[i] >> cnt[i];
    }
    for(int i=0;i<n;i++){
        if(order[i] == "MOVE"){
            if(turn_right==0){
                x= x+cnt[i];
            }
            else if(turn_right==1){
                y= y+cnt[i];
            }
            else if(turn_right==2){
                x= x-cnt[i];
            }
            else if(turn_right==3){
                y= y-cnt[i];
            }
        }
        else if(order[i] == "TURN"){
            if(cnt[i] == 0){
                turn_right++;
                if(turn_right == 4){
                    turn_right = 0;
                }
            }
            else{
                turn_right--;
                if(turn_right == -1){
                    turn_right = 3;
                }
            }
        }
        if(x < 0 || x > m || y < 0 || y > m){
            result = false;
        }
    }
    if(result == false){
        cout << "-1" << endl;
    }
    else{
        cout << x << " " << y << endl;
    }
}
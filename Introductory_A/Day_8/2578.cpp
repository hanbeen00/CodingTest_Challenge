#include <bits/stdc++.h>
using namespace std;
 
int bingo[5][5];
int visited[5][5];
int bingoCnt = 0;
int result=0;
 
void bingo_check1() {
    for(int i = 0; i < 5; i++){
        if(visited[i][0] && visited[i][1] && visited[i][2] && visited[i][3] && visited[i][4]){
            bingoCnt++;
        }
    }   
}
 
void bingo_check2() {
    for(int i = 0; i < 5; i++){
        if(visited[0][i] && visited[1][i] && visited[2][i] && visited[3][i] && visited[4][i]){
            bingoCnt++;
        }
    }        
}
 
void bingo_check3() {
    if(visited[0][0] && visited[1][1] && visited[2][2] && visited[3][3] && visited[4][4]){
        bingoCnt++;
    }        
}
 
void bingo_check4() {
    if(visited[0][4] && visited[1][3] && visited[2][2] && visited[3][1] && visited[4][0]){
        bingoCnt++;
    }
}
 
int main() {
    
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> bingo[i][j];
        }
    }
    
    for(int k = 0; k < 25; k++) {
        int a;
        cin >> a;
        bingoCnt=0;
        
        for(int i = 0; i < 5; i++) {
            for(int j = 0; j < 5; j++) {
                if(bingo[i][j] == a)
                    visited[i][j] = true;
            }
        }
        
        bingo_check1();
        bingo_check2();
        bingo_check3();
        bingo_check4();
        
        if(bingoCnt < 3) {
            result++;
        }
    }
    cout << result+1;
}
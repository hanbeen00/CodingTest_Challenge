#include <bits/stdc++.h>
using namespace std;

int height[9];
int result[7]; 
int total_height = 0; // 조합으로 뽑힌 값들의 총합
int cnt=0; // 이전에 결과를 출력했는지 카운트 (0이면 출력안함, 1이면 이전에 출력했음)

void combination(int depth, int next){
    if(depth == 7){
        for(int i=0; i<7; i++){
            total_height = total_height + height[result[i]];
        } 

        if(total_height == 100 && cnt==0){ // 조합의 합이 100이고 이전에 결과를 출력하지 않았으면
            cnt++;
            for(int i=0; i<7; i++){
                cout << height[result[i]] << endl;
            } 
        }
        else{
            total_height=0;
        }
        return;
    }

    for(int i=next; i<9; i++){
        result[depth]=i;
        combination(depth+1, i+1);
    }
}


int main(){
    for(int i=0; i<9; i++){
        cin >> height[i];
    }    
    sort(height, height+9);
    combination(0,0);
}
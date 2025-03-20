#include <bits/stdc++.h>
using namespace std;

int arr[1002][6] = {0,};
int arr2[1002] = {0, };

void findmax(int *arr, int index){
    int tmp=0;
    int result = -1;

    for(int i=1; i<=5; i++){
        tmp = tmp + *(arr+i);
    }

    for(int i=1; i<=4; i++){
        for(int j=i+1; j<=5; j++){
            if(result < (tmp-*(arr+i)-*(arr+j))%10){
                result = (tmp-*(arr+i)-*(arr+j))%10;      
            }
        }
    }

    arr2[index]=result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    int result = -1;
    int fin;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=5; j++){
            cin >> arr[i][j];
        }
        findmax(arr[i],i);


        if(arr2[i]>result){
            result = arr2[i];
            fin = i;
        }
        else if(arr2[i]==result){
            fin = i;
        }
    }

    cout << fin << "\n";
}
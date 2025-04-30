#include <bits/stdc++.h>
using namespace std;

int width, height;
int n;
vector<tuple<int, int>> points;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> width >> height;
    cin >> n;
    for(int i = 0; i <= n; i++){
        int tmp1, tmp2;
        cin >> tmp1 >> tmp2;
        if(tmp1 == 1){
           points.push_back({tmp2, height});
        } 
        else if(tmp1 == 2){
            points.push_back({tmp2, 0});
        }
        else if(tmp1 == 3){
            points.push_back({0, height - tmp2});
        }
        else if(tmp1 == 4){
            points.push_back({width, height - tmp2});
        }
    }

    int result = 0;
    int answer = 0;

    for(int i =0; i< n; i++){
        int my_x = get<0>(points[n]);
        int my_y = get<1>(points[n]);
        int store_x = get<0>(points[i]);
        int store_y = get<1>(points[i]);

        int max_cnt = (height + width);
        while(1){
            if(my_x==store_x && my_y==store_y){
                break;
            }
            if(my_y == 0 && my_x < width){
                my_x++;
                result++;
            }
            else if(my_x == width && my_y < height){
                my_y++;
                result++;
            }
            else if(my_y == height && my_x > 0){
                my_x--;
                result++;
            }
            else if(my_x == 0 && my_y > 0){
                my_y--;
                result++;
            }
        }
        if(result > max_cnt){
            result = max_cnt*2-result;
        }
        answer =answer + result;
        result = 0;
    }
    cout << answer << endl;

}
#include <bits/stdc++.h>
using namespace std;

int t;
long arr[15][15] = {
    0,
};
vector<pair<int, int>> v;

int main()
{
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int k, n;
        cin >> k >> n;
        v.push_back({k, n});
    }

    for (int i = 0; i <= 14; i++)
    {
        for (int j = 1; j <= 14; j++)
        {
            if (i == 0)
            {
                arr[i][j] = j;
            }

            else
            {
                for (int k = 1; k <= j; k++)
                {
                    arr[i][j] = arr[i][j] + arr[i-1][k];
                }
            }
        }
    }

    for(int i=0;i<t;i++){
        cout << arr[v[i].first][v[i].second] << endl;
    }

}
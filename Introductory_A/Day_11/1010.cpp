#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> v;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m;
        cin >> n >> m;
        v.push_back({n, m});
    }

    for (int i = 0; i < t; i++)
    {
        long long  result = 1;
        int cnt = v[i].second;
        for (int j = 0; j < v[i].first; j++)
        {
            result*=(v[i].second-j); 
			result/=(1+j);
        }
        
        cout << result << endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int arr[5];

bool sortsort(int *arr1, int *arr2)
{
    if (*arr1 > *arr2)
    {
        int tmp;
        tmp = *arr1;
        *arr1 = *arr2;
        *arr2 = tmp;
        return true;
    }
    return false;
}

int main()
{
    int cnt = 0;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    while (1)
    {
        if(arr[0]==1&&arr[1]==2&&arr[2]==3&&arr[3]==4&&arr[4]==5){
            break;
        }
        if (sortsort(&arr[cnt], &arr[cnt + 1]))
        {
            for (int i = 0; i <= 4; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        cnt++;
        if(cnt==4){
            cnt=0;
        }
    }
}
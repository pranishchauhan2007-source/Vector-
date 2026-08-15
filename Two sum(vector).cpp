#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ans;

    int arr[] = {2, 4, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.push_back(arr[i]);
                ans.push_back(arr[j]);
                break;
            }
        }
    }

    cout << ans[0] << " " << ans[1];

    return 0;
}
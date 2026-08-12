#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> v = {10, 2, 45, 99, 5};

    // Descending order
    sort(v.begin(), v.end(), greater<int>());

    // Print vector
    for(int x : v)
    {
        cout << x << " ";
    }

    return 0;
}
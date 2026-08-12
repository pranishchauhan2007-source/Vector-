#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    v.push_back(60);

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
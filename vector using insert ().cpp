#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    v.insert(v.begin() + 2,100);

    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// O(n log(n) time and O(1) space complexity
 
int nonConst(vector<int> arr)
{
    int tc = 0, c = 0, sz = arr.size();
    sort(arr.begin(), arr.end());
    for (auto i = 0; i < sz; i++)
    {
        if (tc + 1 < arr[i])
            return tc + 1;
        tc += arr[i];
    }
    return tc + 1;
}

int main()
{
    vector<int> gh;
    for (auto i = 0; i < 7; i++)
    {
        int g;
        cin >> g;
        gh.push_back(g);
    }

    int ans = nonConst(gh);
    cout << ans << endl;
    return 0;
}
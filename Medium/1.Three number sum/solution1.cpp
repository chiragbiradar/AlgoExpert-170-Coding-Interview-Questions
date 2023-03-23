#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeNumberSum(vector<int> array, int targetSum)
{
    sort(array.begin(), array.end());
    vector<vector<int>> result;
    for (int i = 0; i < array.size(); i++)
    {
        int left = i + 1;
        int right = array.size();
        while (left != right)
        {
            if (array[i] + array[left] + array[right] == targetSum)
            {
                result.push_back({array[i], array[left], array[right]});
                left++;
                right--;
            }
            else if (array[i] + array[left] + array[right] < targetSum)
                left++;
            else
                right--;
        }
    }
    return result;
}

int main()
{
    vector<int> array = {12, 3, 1, 2, -6, 5, -8, 6};
    vector<vector<int>> result = threeNumberSum(array, 0);
    for (int i = 0; i < result.size(); i++)
    {
        cout << "[";
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ,";
        }
        cout << "]" << endl;
    }
    return 0;
}
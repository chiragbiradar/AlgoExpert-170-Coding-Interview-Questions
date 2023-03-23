#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

// O(nlog(n) + mlog(m)) time and O(1) space complexity

vector<int> smallestDifference(vector<int> firstArray, vector<int> secondArray)
{
    sort(firstArray.begin(), firstArray.end());
    sort(secondArray.begin(), secondArray.end());

    vector<int> solution;
    int i = 0, j = 0;
    int smallest = INT_MAX;
    int current = INT_MAX;
    while (i < firstArray.size() && j < secondArray.size())
    {
        int first = firstArray[i];
        int second = secondArray[j];

        if (first > second)
        {
            current = first - second;
            j++;
        }
        else if (first < second)
        {
            current = second - first;
            i++;
        }
        else
            return vector<int>{first, second};

        if (smallest > current)
        {
            smallest = current;
            solution = {first, second};
        }
    }
    return solution;
}

int main()
{
    vector<int> firstArray = {-1, 5, 10, 20, 28, 3};
    vector<int> secondArray = {26, 134, 135, 15, 17};
    vector<int> solution = smallestDifference(firstArray, secondArray);
    cout << "The smallest difference is " << solution[0] << " and " << solution[1] << endl;
    return 0;
}

// O(n) time and O(n) space


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end=nums.size()-1;
        vector<int> solution;
        while(start<=end)
        {
            if(abs(nums[start])>abs(nums[end]))
            {
                solution.insert(solution.begin(),nums[start]*nums[start]);
                start++;
            }
            else
            {
                solution.insert(solution.begin(),nums[end]*nums[end]);
                end--;
            }
        }
        return solution;
    }
};
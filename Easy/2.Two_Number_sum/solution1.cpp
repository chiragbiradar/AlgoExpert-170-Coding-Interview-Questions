// O(n^2) time  and   O(1) space


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int br=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    br=1;
                    ans.push_back(i);
                    ans.push_back(j);
                }
                if(br) break;
            }
            if(br) break;
        }    
        return ans;
        }
};
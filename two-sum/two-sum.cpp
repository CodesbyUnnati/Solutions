class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        for(size_t i=0;i<nums.size();i++)
        {
            for(size_t j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
                    
            }
        }
        return answer;
    }
    
};
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>unique;
        int sum=0;
        int max_sum=0;
        for(int i=0,j=0;j<n;j++)
        {
            while(unique.find(nums[j])!=unique.end())
            {
                unique.erase(nums[i]);
                sum-=nums[i];
                i++;
            }
            unique.insert(nums[j]);
            sum+=nums[j];
            max_sum=max(max_sum,sum);
        }
        return max_sum;
    }
};

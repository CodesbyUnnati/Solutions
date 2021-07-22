class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
         vector<int> array;
        int n=nums.size();
        array.push_back(nums[0]);
        for(int i=0;i<n;i++){
            if(array.back()<nums[i])
                array.push_back(nums[i]);
            
            else //immediate next of similar element
            {
                int index=lower_bound(array.begin(),array.end(),nums[i])-array.begin();
                array[index]=nums[i];
            }
        }
        return array.size(); 
    }
};

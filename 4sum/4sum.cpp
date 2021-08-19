class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end()); //1. SORT
        
        for(int i=0;i<n-3;i++)  //I
        {
            if(i>0 && nums[i]==nums[i-1])// For duplicate
            {continue;}
            
            for(int j=i+1;j<n-2;j++)  //J
            {
                if(j>i+1 && nums[j]==nums[j-1])// For duplicate
                {continue;}
                
                int target_sum=target-(nums[i]+nums[j]);
                int l=j+1; int h=n-1;  //low and high pointer
                while(l<h)
                {
                    if(nums[l]+nums[h]==target_sum)  // we got the answer
                    {
                        vector<int>answer={nums[i],nums[j],nums[l],nums[h]};
                        //store that answer
                        ans.push_back(answer);
                        while(l<h && nums[l]==nums[l+1]) // For duplicate
                        {l++;}
                        
                        while(l<h && nums[h]==nums[h-1])  // For duplicate
                        {h--;}
                        
                        l++; 
                        h--;
                    }
                    //binary search concept
                    else if(nums[l]+nums[h]<target_sum)
                    {
                        l++;
                    }
                    else
                    {
                        h--;
                    }
                }
            }
        }
        return ans;
    }
};